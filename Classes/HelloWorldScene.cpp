#include "HelloWorldScene.h"
#include "ShowDialogButton.h"

USING_NS_CC;

using namespace NativeDialog;

Scene* HelloWorld::createScene()
{
    auto scene = Scene::create();
    scene->addChild(HelloWorld::create());
    return scene;
}

bool HelloWorld::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    ShowDialogButton* button = ShowDialogButton::create(CC_CALLBACK_0(HelloWorld::onSuccessCallback, this));
    button->setPosition(visibleSize /2);
    addChild(button);
    
    return true;
}

void HelloWorld::onSuccessCallback()
{
    CCLOG("[HelloWorld::onSuccessCallback()] called");
}














