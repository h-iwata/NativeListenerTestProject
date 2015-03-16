#include "OpenDialog.h"

using namespace NativeDialog;

void OpenDialog::openDialog(NativeListener* listener)
{
    UIViewController *myViewController = [UIApplication sharedApplication].keyWindow.rootViewController;
    
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"This is NativeDialog" message:@"tap yes send callback" preferredStyle:UIAlertControllerStyleAlert];
    
    [alertController addAction:[UIAlertAction actionWithTitle:@"yes" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
            listener->onSuccess();
    }]];
    
    [myViewController presentViewController:alertController animated:YES completion:nil];
}





