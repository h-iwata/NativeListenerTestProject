#include "ShowDialogButton.h"
#include "OpenDialog.h"

using namespace NativeDialog;

ShowDialogButton::ShowDialogButton(const NativeListener::OnSuccessCallback& callback)
{
    _listener = new NativeListener(callback);
}
ShowDialogButton::~ShowDialogButton()
{
    delete _listener;
}

ShowDialogButton* ShowDialogButton::create(const NativeListener::OnSuccessCallback& callback)
{
    ShowDialogButton* btn = new (std::nothrow) ShowDialogButton(callback);
    if (btn && btn->init("CloseNormal.png")) {
        btn->initialize();
        btn->autorelease();
        return btn;
    }
    CC_SAFE_DELETE(btn);
    return nullptr;

}

void ShowDialogButton::initialize()
{
    addTouchEventListener(CC_CALLBACK_2(ShowDialogButton::onTapButton, this));
}
void ShowDialogButton::onTapButton(Ref *sender, Widget::TouchEventType type)
{
    if(type == TouchEventType::ENDED){
        OpenDialog::openDialog(_listener);
    }
}















