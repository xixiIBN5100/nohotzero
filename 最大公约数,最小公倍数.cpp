#include<iostream>
#include<algorithm>
using namespace std;
int short_divsion(int m,int n)
{
    int i,factor=1;   //factor是求最大公约数
    for(i=2;i<=m&&i<=n;i++)
    {
        while(m%i==0&&n%i==0)
        {
            factor=factor*i;
            m=m/i; n=n/i;
        }
    }
    return factor;
}
int main(){
    int a=0;
    int b=0;
    cout<<"请输入两个数字"<<endl;
    cin>>a;
    cin>>b;
    int  k=max(a,b);
    while(1)
        {
         if(k%a==0&&k%b==0)
            break;
            k++;
        }
        cout<<"最小公倍数为:"<<k<<endl;
        
            
        cout<<"最大公因数为"<<short_divsion(a,b)<<endl;
        }



    
    
