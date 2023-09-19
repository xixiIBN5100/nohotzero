#include<iostream>
using namespace std;
int arr[62503];
int main(){
     char a;
     int x=0;
    for(int i=1;cin>>a&&a!='E';i++){
        if(a=='W'){
            arr[i]=1;
        }else{
            arr[i]=0;
        }
        x++;
    }
    int hua=0;
    int duishou=0;
    for(int i=1;i<=x;i++){
       if(arr[i]==1){
        hua++;
       }else{
        duishou++;
       }
       if(hua>=11&&hua-duishou>=2){
        cout<<hua<<":"<<duishou<<endl;
        hua = 0;
        duishou = 0;
       }
        if(duishou>=11&&duishou-hua>=2){
        cout<<hua<<":"<<duishou<<endl;
        hua = 0;
        duishou = 0;
       }
    }
     cout<<hua<<":"<<duishou<<endl<<endl;
     hua=0;
     duishou=0;

    for(int i=1;i<=x;i++){
       if(arr[i]==1){
        hua++;
       }else{
        duishou++;
       }
       if(hua>=21&&hua-duishou>=2){
        cout<<hua<<":"<<duishou<<endl;
        hua = 0;
        duishou = 0;
       }
        if(duishou>=21&&duishou-hua>=2){
        cout<<hua<<":"<<duishou<<endl;
        hua = 0;
        duishou = 0;
       }
    }
     cout<<hua<<":"<<duishou;
}