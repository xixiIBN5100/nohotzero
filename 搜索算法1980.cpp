#include <iostream>
using namespace std;
int f1(int mun,int k){
    int res = 0;
    //遍历整数上面各个数         例如:13920 取0后——>1392 取2后——>139.....
    while(mun){
        if(mun %10==k){
            res++;
        }
        mun=mun/10;
    }
    return res;
}
int main(){
    int n;
    int x;
     cin>>n>>x;
    int result=0;
    for(int i=0;i<=n;i++){
        result+=f1(i+1,x);
    }
    cout<<result<<endl;
    
}