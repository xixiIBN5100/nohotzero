#include<iostream>
using namespace std;
int n;
int high[15];
int k[15];
int main(){
    cin>>n;
    int w=1;
    for(int i=0;i<n;i++){
        cin>>high[i];
    }
    for(int i=0;i<n;i++){
        if(high[i+1]-high[i]==1){
            w++;
        }else{
            k[i]=w;
            w=1;
        }
    }
    sort(k,k+n);
    
        w=k[n-1];
        cout<<pow(2,w)<<endl;
    
}
