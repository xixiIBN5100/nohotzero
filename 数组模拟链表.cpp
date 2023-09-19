#include <iostream>
using namespace std;
const int N = 1000;
int nxt[N];
int main(){
    int p=1;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        nxt[i]=i+1;
        nxt[n]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=m-2;j++){
            p=nxt[p];
        }
        cout<<nxt[p]<<"\n";
        nxt[p]=nxt[nxt[p]];
    }
    return 0;
}