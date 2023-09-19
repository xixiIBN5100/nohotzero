#include<iostream>
using namespace std;
bool iszhishu(int a){
    if(a==1){
        return 0;
    }    if(a==2){
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
   int n;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }
   vector<int>::iterator it=v.begin();
   while(it!=v.end()){
    if(iszhishu(*it)){
       cout<<*it<<" ";
       it++;
    }else{
    it++;
   }
  
}}