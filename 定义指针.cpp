#include<iostream>
using namespace std;
int main(){
    int a=10;
    int*p;
    p=&a;//&取址符号
    *p=1000;//解址
    cout<<a<<endl;
}