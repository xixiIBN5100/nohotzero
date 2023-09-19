#include<iostream>
#include<algorithm>
using namespace std;
struct student{
    int yuwen;
    int shuxue;
    int yinyu;
    int num;
    int zongfen;
}s[100005];
bool com(student s1,student s2){
    if(s1.zongfen != s2.zongfen){
     return s1.zongfen>s2.zongfen;
    }else if(s1.zongfen == s2.zongfen&&s1.yuwen != s2.yuwen){
     return s1.yuwen>s2.yuwen;
    }else{
        return s1.num<s2.num;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i].yuwen>>s[i].shuxue>>s[i].yinyu;
        s[i].zongfen=s[i].shuxue+s[i].yinyu+s[i].yuwen;
        s[i].num=i;
    }
    sort(begin(s),end(s),com);
    for(int i=0;i<5;i++){
        cout<<s[i].num<<" "<<s[i].zongfen<<endl;
    }
}