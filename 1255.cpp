#include<iostream>
using namespace std;
int arr[5003][5003];
int len = 1;
void hp(int k){
    for(int i=1;i<=len;i++){
       arr[k][i] = arr[k-1][i] + arr[k-2][i];
    }
    for(int i=1;i<=len;i++){
        if(arr[k][i]>=10){
            arr[k][i+1] += arr[k][i]/10;
            arr[k][i] = arr[k][i]%10;
            if(arr[k][len+1]>0){
                len++;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    arr[1][1]=1;
    arr[2][1]=2;
    for(int i=3;i<=n;i++){
        hp(i);
    }
    for(int i=len;i>=1;i--){
        cout<<arr[n][i];
    }
}