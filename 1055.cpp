#include<iostream>
using namespace std;
char a[100];
int main(){
    int k=0;
    int mun=0;
    for(int i=0;i<11;i++){
      cin>>a[i];
      if(a[i]!='-'){
        k++;
        mun+=k*(a[i]-'0');
      }
    }
    cin>>a[12]>>a[13];
    
    int y=mun%11;
    if(y==10){
         char ans;
         ans='X';
         if(ans==a[13]){
        cout<<"Right"<<endl;
    }else{
        cout<<a<<'-'<<ans<<endl;
    }
    }else{
        int ans;
        ans=y;
        if(ans==a[13]-'0'){
        cout<<"Right"<<endl;
    }else{
        cout<<a<<'-'<<y<<endl;
    }
    }
}