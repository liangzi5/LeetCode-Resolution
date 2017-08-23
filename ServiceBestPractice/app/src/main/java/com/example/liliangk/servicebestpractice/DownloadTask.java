package com.example.liliangk.servicebestpractice;

import android.os.AsyncTask;

import java.io.InputStream;

/**
 * Created by liliangk on 2017/8/16.
 */

public class DownloadTask extends AsyncTask {
    public static final int TYPE_SUCCESS=0;
    public static final int TYPE_FAILD=1;
    public static final int TYPE_PAUSED=2;
    public static final int TYPE_CANCELED=3;

    private DownloadListener listener;
    private boolean isCanceled=false;
    private boolean isPaused=false;
    private int lastProgress;

    public DownloadTask(DownloadListener listender)
    {
        this.listener=listener;
    }

    protected Integer doInBackground(String...params)
    {
        InputStream is=null;

    }


}
