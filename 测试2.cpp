#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    arr[1]=arr[2];
    cout<<arr[1]<<arr[2];
}