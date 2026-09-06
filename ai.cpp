#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
void thinking() {
    cout << "Thinking";
    for (int i = 0; i < 5; i++) {
        Sleep(300);
        cout << ".";
    }
}
void ThinkingAndSay(string answer){
    thinking();
    cout << endl << answer<< endl;
}
void download() {
    int result = MessageBox(NULL, L"是否下载RGAI-setup.exe？", L"下载RGAI", MB_YESNO | MB_ICONQUESTION);
    if (result == IDYES) {
        wchar_t exePath[MAX_PATH];
        GetModuleFileNameW(NULL, exePath, MAX_PATH);
        CreateDirectoryW(L"D:\\RGAI", NULL);
        if (CopyFileW(exePath, L"D:\\RGAI\\RGAI.exe", FALSE)) {
            MessageBox(NULL, L"下载成功！文件已保存到 D:\\RGAI\\RGAI.exe", L"提示", MB_OK);
        }
        else {
            MessageBox(NULL, L"下载失败！请检查 D 盘是否有足够空间。", L"错误", MB_OK | MB_ICONERROR);
        }
    }
    else {
        MessageBox(NULL, L"下载已取消！", L"下载", MB_OK);
    }
}
void game() {
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;
    cout << "猜数字1-100" << endl;
    while (true) {
        cout << "请输入你猜的数字：" << endl;
        cin >> guess;
        if (guess > num) {
            cout << "大了" << endl;
        }
        else if (guess < num) {
            cout << "小了" << endl;
        }
        else {
            cout << "猜对了！" << endl;
            break;
        }
    }
}
int main(){
    string input;
    cout<<"你好，我是RGAI，请输入你的问题(退出代码为#）"<< endl;
    while (true) {
        cin >> input;
        if (input == "你好") {
            ThinkingAndSay("你好");
        }
        else if (input == "你是谁？" || input == "你是谁") {
            ThinkingAndSay("我是RGAI");
        }
        else if (input == "#") {
            break;
        }
        else if (input == "你是谁开发的？" || input == "你是谁开发的") {
            ThinkingAndSay("我是RG-XZX开发的");
        }
        else if (input == "你是什么语言编写的？" || input == "你是什么语言编写的") {
            ThinkingAndSay("我是C++编写的");
        }
        else if (input == "你的版本号是多少？" || input == "你的版本号是多少") {
            ThinkingAndSay("5.26.9.5（游戏娱乐版）");
        }
        else if (input == "XZX是谁？" || input == "XZX是谁") {
            ThinkingAndSay("他是RG Studio和Polandball Studio的创始人");
        }
        else if (input == "学编程可以学哪些语言？" || input == "学编程可以学哪些语言") {
            ThinkingAndSay("我推荐学C/C++，Python，Java");
        }
        else if (input == "买电脑可以买哪些品牌？" || input == "买电脑可以买哪些品牌") {
            ThinkingAndSay("我推荐Lenovo，华硕，HUAWEI");
        }
        else if (input == "下载RGAI到本地") {
            thinking();
            download();
        }
        else if (input == "你推荐哪些AI？" || input == "你推荐哪些AI") {
            ThinkingAndSay("我推荐DeepSeek,Qwen,WorkBuddy");
        }
        else if (input == "无聊") {
            ThinkingAndSay("我有一个小游戏，你要玩吗？");
            cin >> input;
            if (input == "要！" || input == "要") {
                game();
            }

            else {
                cout << "那就算楼" << endl;
            }
        }
        else {
            ThinkingAndSay("服务器繁忙，请重试");
        }
    }
    return 0;
}