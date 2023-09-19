#include<iostream>
using namespace std;
int main(){
    int empyt=0;
    int arr[10]={2,3,5,1,3,9,7,0,6,8};
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(arr[j]>arr[j+1]){
                empyt=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=empyt;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
}