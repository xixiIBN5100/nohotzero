#include<iostream>
#include<set>
using namespace std;
set<int>s1;
bool iszhishu(int a){
    if(a==0||a==1){
        return 0;
    }
    if(a==2){
        return 1;
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    string q;
    cin>>q;
     multiset<char>s;
     for(int i=0;i<q.size();i++){
        s.insert(q[i]);
     }
     for(int i=0;i<26;i++){
         int mun=s.count('a'+i);
         s1.insert(mun);
     }
     int mun1=*(--s1.end())-*(++s1.begin());
     if(iszhishu(mun1)){
         cout<<"Lucky Word"<<endl;
         cout<<mun1<<endl;
     }else{
        cout<<"No Answer"<<endl;
        cout<<"0"<<endl;
     }
    
     
}