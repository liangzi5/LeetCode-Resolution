package com.example.liliangk.jnitest2;

/**
 * Created by liliangk on 2017/8/21.
 */

public class myJNI {
    static
    {
        System.loadLibrary("JniTest");
    }
    public static native String sayHello();
}
