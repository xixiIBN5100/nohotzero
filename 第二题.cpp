#include<iostream>
using namespace std;
int high[10000],n,a,b;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>high[i];
    }
    for(;;){
         int ans=0;
         int ans1=0;
    for(int i=0;i<n;i++){
        if(high[i]==0){
        ans++;
        }
        b=ans;
    }
  for(int i = 0;i<n;i++){
    if(high[i]>0){
       high[i]--;
    
   if(high[i]<0){
       high[i]= 0;
    }
    }
    
  }
   for(int j=0;j<n;j++){
        if(high[j]==0){
        ans1++;
        }
        a=ans1;
       
    }
    if(a==b){
        break;
    }
    }

    for(int i=0;i<n;i++){
        cout<<high[i]<<endl;
    }
}
  





