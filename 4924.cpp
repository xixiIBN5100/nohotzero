#include<iostream>
using namespace std;
int arr[700][700];
int temparr[700][700];
int main(){
    int n,m;
    cin>>n>>m;
    int fuzhi=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            arr[i][j]=fuzhi++;
        }
    }
    int x,y,r,z;
   
    for(int k=0;k<m;k++){
         cin>>x>>y>>r>>z;
    if(z==1){//逆时针
    for(int i=x-r;i<=x+r;i++){
        for(int j=y-r;j<=y+r;j++){
            temparr[x+y-j][y-x+i]=arr[i][j];
        }
    }
    for(int i=x-r;i<=x+r;i++){
        for(int j=y-r;j<=y+r;j++){
            arr[i][j]=temparr[i][j];
        }
    }
    }
    if(z==0){//顺时针
    for(int i=x-r;i<=x+r;i++){
        for(int j=y-r;j<=y+r;j++){
            temparr[x-y+j][y+x-i]=arr[i][j];
        }
    }
    for(int i=x-r;i<=x+r;i++){
        for(int j=y-r;j<=y+r;j++){
            arr[i][j]=temparr[i][j];
        }
    }
    }

    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}