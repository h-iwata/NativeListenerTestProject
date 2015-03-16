#include "OpenDialog.h"
#include "platform/android/jni/JniHelper.h"

USING_NS_CC;
using namespace NativeDialog;

void OpenDialog::openDialog(NativeListener* listener)
{
	JniMethodInfo t;
	if (JniHelper::getStaticMethodInfo(
				t,
				"com/hiwata/NativeDialog/OpenDialog",
				"openDialog",
				"(Lcom/hiwata/NativeDialog/JavaNativeListener;)V")) {
		JniMethodInfo f;
		if(JniHelper::getMethodInfo(f, "com/hiwata/NativeDialog/JavaNativeListener", "<init>", "(J)V")){
			jobject javaListener = f.env->NewObject(f.classID, f.methodID, (unsigned long long) listener);
			t.env->CallStaticVoidMethod(t.classID, t.methodID, javaListener);
		}
	}
}
