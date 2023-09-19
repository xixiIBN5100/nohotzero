#include <iostream>
using namespace std;
int num[10005],flag[10005];
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
   cin>>num[i];}
    sort(num,num+n+1);
    for(int i=1;i<=n;i++){
   for(int j=1;j<i;j++){
   if(num[i]==num[j]){
    flag[i]=1;
   }
   }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(flag[i]==0){
     ans++;
        }
    }
    cout<<ans<<endl;
    sort(num,num+n+1);
    
  for(int i=1;i<=n;i++){
    if(flag[i]==0){
    cout<<num[i]<<" ";
  }
  }


}