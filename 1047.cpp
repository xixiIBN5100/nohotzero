#include<iostream>
using namespace std;
int l,m;
int flag[10005];
int main(){
    
   cin>>l>>m;
   for(int i=0;i<=l;i++){
    flag[i]=1;
   }
   for(int i=0;i<m;i++){
     int r,l;
     cin>>r>>l;
     for(int j=r;j<=l;j++){
        if(flag[j]==1){
            flag[j]=0;
        }

     }

   }
   int ans = 0;
   for(int i =0;i<=l;i++){
    if(flag[i]==1){
        ans++;
    }
   }
   cout<<ans<<endl;
}