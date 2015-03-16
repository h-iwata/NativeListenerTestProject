#ifndef __NativeListenerTestProject__NativeListener__
#define __NativeListenerTestProject__NativeListener__

#include <functional>

namespace NativeDialog {
    
    class NativeListener
    {
    public:
        typedef std::function<void(void)> OnSuccessCallback;
        NativeListener(const OnSuccessCallback& callback);
        
        void onSuccess();
        
    private:
        OnSuccessCallback _callback;
    };
    
};


#endif /* defined(__NativeListenerTestProject__NativeListener__) */
