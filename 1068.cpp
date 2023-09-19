#include<iostream>
using namespace std;
struct people
{
    int bishi;
    int num;
    int flag;
}p[9000];
bool sort_(people p1,people p2){
     if(p1.bishi != p2.bishi){
        return p1.bishi>p2.bishi;
     }else{
        return p1.num<p2.num;
     }
}

int main(){
    int ans = 0;
    int n,m;
    cin>>n>>m;
    int renshu = m*1.5;
    for(int i=1;i<=n;i++){
        cin>>p[i].num>>p[i].bishi;
        p[i].flag=0;
    }
    sort(p + 1, p + n + 1, sort_);
    int nowrenshu = 0;
    int fsx=100;
    while(renshu>nowrenshu){
    fsx--;
    for(int i=1;i<=n;i++){
        if(p[i].bishi>fsx){
            if(p[i].flag == 0){
             p[i].flag=1;
             nowrenshu++;
        }
        }
    }
    }
    cout<<fsx+1<<" "<<nowrenshu<<endl;
    for(int i=1;i<=n;i++){
        if(p[i].flag==1){
            cout<<p[i].num<<" "<<p[i].bishi<<endl;
        }
    }
}