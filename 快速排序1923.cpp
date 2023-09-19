#include <iostream>
using namespace std;
int k,n;
const int N=1e7+10;
int arr[N];
void qsort(int arr[],int l,int r){
    int i=l-1;
    int j=r+1;
    int x=arr[(l+r)/2];
    
    if(l>=r){
        return;
    }
    while(i<j){
    do{
        i++;
    }while(arr[i]<x);
    do{
        j--;
    }while(arr[j]>x);
    if(i<j){
        swap(arr[i],arr[j]);
    }
    };
    if(k<=j){
        qsort(arr,l,j);
    }else{
        qsort(arr,j+1,r);
    };
    
    
}


int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,0,n-1);//开始是第0小,最大是第n-1小!!
    printf("%d",arr[k]);
} 