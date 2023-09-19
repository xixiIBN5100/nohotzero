#include<iostream>
using namespace std;
struct student{
    int mun;
    int xueye;
    int suzhi;
    int sum;
    int zongfen(){
        return xueye+suzhi;
    }
}s[1001];
 void pd(student s1){
        if(s1.zongfen()>140&&s1.sum>=800){
            cout<<"Excellent"<<endl;
        }else{
            cout<<"Not excellent"<<endl;
        }
    }
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i].mun>>s[i].xueye>>s[i].suzhi;
        s[i].sum=s[i].xueye*7+s[i].suzhi*3;
    }
    for(int i=0;i<n;i++){
        pd(s[i]);
    }
}