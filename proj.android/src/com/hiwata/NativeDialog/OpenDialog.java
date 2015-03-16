package com.hiwata.NativeDialog;

import org.cocos2dx.cpp.AppActivity;
import org.cocos2dx.lib.Cocos2dxActivity;

import android.app.AlertDialog;
import android.content.DialogInterface;

public class OpenDialog {
	public static void openDialog(final JavaNativeListener listener) {
		final Cocos2dxActivity activity =  AppActivity.getActivity();
		
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
            		AlertDialog.Builder dialog = new AlertDialog.Builder(activity);
            		dialog.setNegativeButton("Yes", new DialogInterface.OnClickListener() {
	                    @Override
	                    public void onClick(DialogInterface dialog, int which) {
	                    		listener.onSuccess();
	                    }
	                });
                AlertDialog alert = dialog.create();
                alert.setTitle("This is NativeDialog");
                alert.setMessage("tap yes send callback");
                alert.setCancelable(false);
                alert.show();
            }
        });
	    
	}
	
}