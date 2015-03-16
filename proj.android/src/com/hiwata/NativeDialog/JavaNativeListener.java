package com.hiwata.NativeDialog;

public class JavaNativeListener {
	private long mDelegate;
    public JavaNativeListener(long delegate){
        this.mDelegate = delegate;
    }
	public native void onNativeSuccess(long delegate);
	
	public void onSuccess(){
		onNativeSuccess(this.mDelegate);
    }
	
}