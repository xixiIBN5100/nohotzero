#include<iostream>
using namespace std;
int arr[110];
int main(){
    int n;
    cin>>n;
    int x=n-1;
    int zhishu=x;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    if(n!=0){
    if(arr[0]!=0){
        if(arr[0]!=-1&&arr[0]!=1){
    cout<<arr[0]<<"x^"<<n;
        }else if(arr[0]==1){
            cout<<"x^"<<n;
        }else if(arr[0]== -1){
            cout<<"-x^"<<n;
        }
    }
    for(int i=1;i<=n-2;i++){
      if(arr[i]>0){
        if(arr[i]!=1){
          cout<<"+"<<arr[i]<<"x^"<<zhishu;
      }else{
        cout<<"+x^"<<zhishu;
      }
      }else if(arr[i]<0){
        if(arr[i]!= -1){
        cout<<arr[i]<<"x^"<<zhishu;
      }else{
        cout<<"-x^"<<zhishu;
      }
     
    }
     --zhishu;
    
}
    if(arr[n-1]>0){
    if(arr[n-1]!=1){
        cout<<"+"<<arr[n-1]<<"x";
    }else{
        cout<<"+x";
    }}else if(arr[n-1]<0){
        if(arr[n-1]!= -1){
        cout<<arr[n-1]<<"x";
    }else{
        cout<<"-x";
    }}
    if(arr[n]>0){
        cout<<"+"<<arr[n];
    }else if(arr[n]<0){
        cout<<arr[n];
    }

}else{
    if(arr[n]>0){
        cout<<arr[n];
    }else if(arr[n]<0){
        cout<<arr[n];
    }
}

}