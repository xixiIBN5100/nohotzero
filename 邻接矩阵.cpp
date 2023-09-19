#include <iostream>
using namespace std;
const int N = 1000;
int edge[N][N];
int main(){
    int m,n,w;
    cin>>m,n;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v>>w;
        edge[u][v]=w;
    }
}