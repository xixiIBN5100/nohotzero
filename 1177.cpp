#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    multiset<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.insert(x);
    }
    for(multiset<int>::iterator it = v.begin();it != v.end();it++){
        cout<<*it<<" ";
    }

    
}