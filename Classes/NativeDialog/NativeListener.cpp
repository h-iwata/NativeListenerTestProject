#include "NativeListener.h"

using namespace NativeDialog;

NativeListener::NativeListener(const OnSuccessCallback& callback):
_callback(callback)
{}


void NativeListener::onSuccess()
{
    _callback();
}
