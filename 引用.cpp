#include<iostream>
using namespace std;
void f1(int &a,int &b){//引用代替指针,形参影响实参
    int temp=a;
    a=b;
    b=temp;

}
int main(){
    int a=10;
    int b=20;
    f1(a,b);
    cout<<a<<endl<<b<<endl;

}