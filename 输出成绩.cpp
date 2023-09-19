#include<iostream>
using namespace std;
int main(){
    int a;
    int arr[3][3]=
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };
    for(int i=0;i<3;i++){
        a=0;
    for(int j=0;j<3;j++){
        a=arr[i][j]+a;
       //a+=arr[i][j];
    }
    cout<<a<<endl;
    }
}