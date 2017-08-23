package com.example.liliangk.androidthreadtest;

import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements View.OnClickListener{
    private TextView text;
    private Button button;
    ;
    private Handler handler=new Handler(){
        public void handleMessage(Message msg)
        {
            switch(msg.what)
            {
                case 0:
                    text.setText("Nice to meet you");
                    break;
                default:
                    break;
            }
        }
    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        text=(TextView)findViewById(R.id.text);
        button=(Button)findViewById(R.id.change_text);
        button.setOnClickListener(this);
    }

    public void onClick(View v)
    {
        switch(v.getId())
        {
            case R.id.change_text:
                new Thread(new Runnable(){public void run(){
                    Message message=new Message();
                    message.what=0;
                    handler.sendMessage(message);
                }}).start();
                break;
            default:
                break;
        }

    }
}
