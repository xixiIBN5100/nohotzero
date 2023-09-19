#include<iostream>
using namespace std;
int main(){
    vector<int>v;
    int x;
    while(cin>>x){
        v.push_back(x);
    }
    
    int sum =0;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        sum+=*it;
    }
    int a=v.size()-1;
    int j=pow(2,a);
    long long ans=sum*j;
    cout<<ans;
}