#include<iostream>
using namespace std;
int people[1050][1050];
void dg(int a,int x,int y){
    if(a==2){
        people[x][y]=0;
        return;
    }
    for(int i=x;i<x+a/2;i++){
        for(int j=y;j<y+a/2;j++){
            people[i][j]=0;
        }
    }

}
int main(){
    for (int i = 0; i < 1050; i++) {
    for (int j = 0; j < 1050; j++) {
        people[i][j] = 1;
    }
}
    int n;
    cin>>n;
    int l=pow(2,n);
    dg(l,0,0);
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            cout<<people[i][j]<<" ";
        }
        cout<<endl;
    }
}