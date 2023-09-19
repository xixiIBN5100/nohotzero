#include<iostream>
using namespace std;
string name[100001];
int chaoxiang[100001];
int y,z,n,m;
int main(){
     cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>chaoxiang[i]>>name[i];
    }
    int now = 0;
    for(int i=0;i<m;i++){
        cin>>y>>z;
        if(y==0&&chaoxiang[now]==0){
            now=(now+n-z)%n;
        }else if(y==0&&chaoxiang[now]==1){
           now=(now+z)%n;
        }else if(y==1&&chaoxiang[now]==0){
            now=(now+z)%n;
        }else if(y==1&&chaoxiang[now]==1){
         now=(now+n-z)%n;
        }
       
    }
   cout<<name[now]<<endl;
   return 0;
    
}