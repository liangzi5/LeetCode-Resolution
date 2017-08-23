package com.example.liliangk.servicebestpractice;

/**
 * Created by liliangk on 2017/8/16.
 */

public interface DownloadListener {
    void onProgress(int  progress);
    void onSrccess();
    void onFaild();
    void onPause();
    void onCanceled();
}
