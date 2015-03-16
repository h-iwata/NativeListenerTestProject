#import "cocos2d.h"
#import "NativeListener.h"

USING_NS_CC;
using namespace NativeDialog;

extern "C"
{
	JNIEXPORT void JNICALL Java_com_hiwata_NativeDialog_JavaNativeListener_onNativeSuccess(JNIEnv* env, jobject thiz, jlong delegate);
};

JNIEXPORT void JNICALL Java_com_hiwata_NativeDialog_JavaNativeListener_onNativeSuccess(JNIEnv* env, jobject thiz, jlong delegate)
{
	reinterpret_cast<NativeListener*>(delegate)->onSuccess();
}
