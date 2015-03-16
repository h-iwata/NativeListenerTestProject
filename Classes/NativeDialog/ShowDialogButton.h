#ifndef __NativeListenerTestProject__ShowDialogButton__
#define __NativeListenerTestProject__ShowDialogButton__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "NativeListener.h"

USING_NS_CC;

namespace NativeDialog {
    class ShowDialogButton : public ui::Button
    {
    public:
        ShowDialogButton(const NativeListener::OnSuccessCallback& callback);
        ~ShowDialogButton();
        static ShowDialogButton* create(const NativeListener::OnSuccessCallback& callback);
        void initialize();
        void onTapButton(Ref *sender, Widget::TouchEventType type);
    private:
        NativeListener* _listener;
        std::string _message;
    };
    
}


#endif /* defined(__NativeListenerTestProject__ShowDialogButton__) */
