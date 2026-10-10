#include<iostream>
using namespace std;

int main(){
    cout<<"--------------------\n"<<"简单计算器\n"<<"--------------------\n";
    cout<<"请选择算法：\n"<<"1.加法\n"<<"2.减法\n"<<"3,乘法\n"<<"4.除法\n"<<"5.退出\n";

    int op,a,b;
    cin>>op;
    cout<<"输入两个数";
    cin>>a>>b;
    bool run=true;
    while (run)
    {
        switch (op)
        {
        case 1:
            cout<<add(a,b);
            break;
        case 2:
            cout<<sub(a,b);
            break;
        case 3:
            cout<<mul(a,b);
            break;
        case 4:
            cout<<div(a,b);
            break;
        case 5:
            run=false;
            break;
        default:
            run=false;
            break;
        }
    }
    
    
    return 0;