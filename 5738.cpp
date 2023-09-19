#include<iostream>
#include<set>
#include<iomanip>
using namespace std;
int main(){
  multiset<double>s2;
  multiset<int>s;
  int n,m;
  cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int x;
        cin>>x;
        s.insert(x);

    }
    multiset<int>::iterator it=++s.begin();
    int sum=0;
    while(it!=--s.end()){
        sum+=*it;
        it++;
    }
     double avg = static_cast<double>(sum) / (m - 2);
            s2.insert(avg);
    s.clear();
}
cout<<fixed<<setprecision(2)<<*--s2.end();


}