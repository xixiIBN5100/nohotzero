#include<iostream>
#include<set>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    multiset<int> v;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v.insert(x);
    }
    for(multiset<int>::iterator it = v.begin();it != v.end();it++){
        cout<<*it<<" ";
    }

    
}