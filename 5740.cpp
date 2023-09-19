#include<iostream>
using namespace std;
struct student
{
    string name;
    int math;
    int chinese;
    int english;
    int sum;
}s[1001];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].chinese>>s[i].math>>s[i].english;
        s[i].sum=s[i].chinese+s[i].english+s[i].math;
    }
    int maxn=0;
    int flag=0;
    for(int i=0;i<n;i++){
        if(s[i].sum>maxn){
           maxn=s[i].sum;
           flag=i;
        }
    }
    cout<<s[flag].name<<" "<<s[flag].chinese<<" "<<s[flag].math<<" "<<s[flag].english;
}