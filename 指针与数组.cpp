#include<iostream>
using namespace std;
void f1(int*arr,int length){
    for(int i=0;i<length;i++){
       for(int j=0;j<length-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        
        }
       }
    }
}

int main(){
int arr[]={6,5,4,7,8,9,1,2,3,49,33,50,33,25,44};
int length=sizeof(arr)/sizeof(arr[0]);
f1(arr,length);
int *p=arr;
for(int i=0;i<length;i++){
    cout<<*p<<endl;
    p++;
}




}//GOOD JOB!