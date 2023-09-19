#include<iostream>
using namespace std;
int arr[10001];
bool pd(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    int ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int flag = 1;
    while(1){
        if(arr[flag]>arr[flag+1]){
        swap(arr[flag],arr[flag+1]);
        ans++;
        }
        flag++;
        if(flag==n){
            flag=1;
        }
        if(pd(arr,n)){
            break;
        }
    }
    cout<<ans;
}