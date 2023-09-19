#include<iostream>
#include"swap.h"
using namespace std;
int swap(int a,int b){
 int temp=0;
 temp=a;
 a=b;
 b=temp;
 cout<<a<<b<<endl;
}
int main(){
    int a=10;
    int b=30;
    int a=swap(a,b);
}