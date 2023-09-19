#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iomanip>
using namespace std;
struct gold{
    double v,w,vw;
}g[1000];
bool cmp(gold a,gold b){
    return a.vw>b.vw;
}
int main(){
    int t,n;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>g[i].w>>g[i].v;
        g[i].vw=g[i].v/g[i].w;
    }
    sort(g,g+n,cmp);
    int i=0;
    double ans = 0;
    while(t && i<= n){
        if(t>=g[i].w){
            ans += g[i].v;
            t -= g[i].w;
        }else{
            ans+= t*g[i].vw;
            t=0 ;
        }
        i++;
    }
    cout<<fixed<<setprecision(2)<<ans;
    return 0;
}