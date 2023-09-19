#include<iostream>
using namespace std;
int main(){
    int arr[]={10,30000,100,40,50};
    int max=0;
    for(int i =0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    
}