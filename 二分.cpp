#include <iostream>
using namespace std;
int n,c;
const int N=1e5;
int arr[N];


bool check(int x){
    int num=1;
    int before=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-before>=x){
            num++;
            before=arr[i];
            
        }
        
        if(num==n){
                return 0;
            }
    }
    return 1;
}


int main(){
    
    cin>>n>>c;
    for(int i=0;i<n;n++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int l=1;
    int r=1e9;
    while(l<r){
        int mid =(l+r)/2;
        if(check(mid)){
            r = mid;
        }else{
            l=mid+1;
        }
    }
    cout<<l<<endl;
}