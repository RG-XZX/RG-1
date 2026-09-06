#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
using namespace std;
int main(){
    float Num1,Num2;
    string symbol;
    cout<<"欢迎使用RG计算器1.0！"<< endl;
    cout<<"请输入第一个数字"<< endl;
    cin>>Num1;
    cout<<"请输入运算符号（+、-、*、/）"<< endl;
    cin>>symbol;
    cout<<"请输入第二个数字"<< endl;
    cin>>Num2;
    if(symbol == "+"){
        cout<<Num1<<"+"<<Num2<<"="<<Num1 + Num2<< endl;
    }
    else if(symbol == "-"){
        cout<<Num1<<"-"<<Num2<<"="<<Num1-Num2<< endl;
    }
    else if(symbol == "*"){
        cout<<Num1<<"*"<<Num2<<"="<<Num1*Num2<< endl;
    }
    else if(symbol == "/"){
        if(Num2!=0){
            cout<<Num1<<"/"<<Num2<<"="<<Num1/Num2<< endl;
        }
        else{
            cout<<"除数不能为0！"<< endl;
        }
    }
    else if(symbol == "#"){
        cout<<"结束计算！"<< endl;
        system("cls");
        cout<<"3"<< endl;
        Sleep(1000);
        system("cls");
        cout<<"2"<< endl;
        Sleep(1000);
        system("cls");
        cout<<"1"<< endl;
        Sleep(1000);
        system("cls");
        exit(0);
    }
    else{
        cout<<"请输入正确的运算符！"<< endl;
    }
    system("pause");
    return 0;
}