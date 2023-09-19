#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=0;
     for(int i=1;i<101;i++){
        a=i%10;
        b=i/10;
        if(a==7||b==7||i%7==0){
            cout<<"敲桌子"<<endl;
        }else{
            cout<<i<<endl;

        }
     }
}