package com.example.liliangk.servicetest;

import android.app.IntentService;
import android.content.Intent;
import android.util.Log;

/**
 * Created by liliangk on 2017/8/15.
 */

public class MyIntentService extends IntentService {

    public MyIntentService()
    {
        super("MyIntentService");
    }
    public void onHandleIntent(Intent intent)
    {
        Log.d("MyIntentService","Thread id is "+Thread.currentThread().getId());
    }

    public void onDestroy()
    {
        super.onDestroy();
        Log.d("MyIntentService","onDestroy executed");
    }

}
