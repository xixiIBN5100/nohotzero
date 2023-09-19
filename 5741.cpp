#include<iostream>
using namespace std;
struct student
{
    string name;
    int e;
    int c;
    int m;
    int sum;
}s[1001];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].c>>s[i].m>>s[i].e;
        s[i].sum=s[i].c+s[i].e+s[i].m;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (abs(s[i].c-s[j].c)<=5&&abs(s[i].e-s[j].e)<=5&&abs(s[i].m-s[j].m)<=5&&abs(s[i].sum-s[j].sum)<=10) {
    cout << s[i].name << " " << s[j].name << endl;
}
        }
    }
}