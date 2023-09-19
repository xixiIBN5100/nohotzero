#include<iostream>
#include<set>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    multiset<int>s;
    for(int i=0;i<n;i++){
        int x=0;
        cin>>x;
        s.insert(x);
    }
    double sum=0;
    s.erase(s.begin());
    s.erase(--s.end());
    for(multiset<int>::iterator it=s.begin();it!=s.end();it++){
        sum += *it;
    }
    double ans=sum/(n-2);
    cout<<fixed<<setprecision(2)<<ans<<endl;
}