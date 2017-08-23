package com.example.liliangk.lbstest;

import android.content.pm.PackageManager;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;
import android.widget.Toast;

import com.baidu.location.LocationClient;

public class MainActivity extends AppCompatActivity {
    public LocationClient mLocationClient;
    private TextView positionText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        mLocationClient=new LocationClient(getApplicationContext());
        mLocationClient.registerLocationListener(new MyLocation);
        setContentView(R.layout.activity_main);
    }

    private void requestLocation()
    {
        mLocationClient.start();
    }

    public void onRequestPermissionResult(int requestCode,String[] permissions,int[] grantResults)
    {
        switch(requestCode)
        {
            case 1:
                if(grantResults.length>0)
                {
                    for(int result:grantResults)
                    {
                        if(result!= PackageManager.PERMISSION_GRANTED)
                        {
                            Toast.makeText(this,"必须同意所有权限才能使用被程序",Toast.LENGTH_SHORT).show();
                            finish();
                            return;
                        }
                    }
                    requestLocation();
                }
                else
                {
                    Toast.makeText(this,"发生未知错误",Toast.LENGTH_SHORT).show();
                    finish();
                }
                break;
            default:

        }
    }
    public class Myl

}
