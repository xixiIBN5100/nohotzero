#include<iostream>
#include<set>
using namespace std;
int a;
int k[100];
int main(){
    set<int>s;
     cin>>a;
    for(int i=1;i<=a;i++){
        cin>>k[i];
    }
    int ans=0;
    for(int i=1;i<=a;i++){
        for(int j=2;j<=a;j++){
            int x=k[i]+k[j];
            s.insert(x);
        }
    }
    int ans_=0;
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        for(int i=1;i<=a;i++){
            if(k[i]==*it){
                ans_++;
            }
        }
    }
    cout<<ans_;
    

}