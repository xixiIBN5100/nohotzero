#include<iostream>
using namespace std;
int n,m;
int main(){
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            m=i;
            break;
        }
    }
    cout<<n/m;
}