#include <iostream>
using namespace std;
int pd[10],ans[10],n;
void print(){
    for(int i=1;i<=n;i++){
    printf("%5d",ans[i]);
    }
    cout<<endl;
}

void dfs(int k){
    if(k==n){
        print();
        return;
    }
    
    for(int i=1;i<=n;i++){
        if(!pd[i]){
            pd[i]=1;
            ans[k+1]=i;
            dfs(k+1);
            pd[i]=0;
        }
    }
}


int main(){
    cin>>n;
    dfs(0);
    return 0;
}