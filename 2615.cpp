#include<iostream>
using namespace std;
int n;
int arr[40][40];
int main(){
    cin>>n;
    int k=n*n;
    int y=(n/2);
    int x=0;
    arr[0][n/2]=1;
    for(int i=2;i<=k;i++){
         if(x==0&&y!=(n-1)){
            arr[n-1][y+1]=i;
            x=n-1;
            y=y+1;
         }else if(x==0&&y==(n-1)){
            arr[x+1][y]=i;
            x=x+1;
         }else if(x!=0&&y==(n-1)){
            arr[x-1][0]=i;
            x=x-1;
            y=0;
         }else{
            if(arr[x-1][y+1]==0){
                arr[x-1][y+1]=i;
                x=x-1;
                y=y+1;
            }else{
                arr[x+1][y]=i;
                x=x+1;
            }
         }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}