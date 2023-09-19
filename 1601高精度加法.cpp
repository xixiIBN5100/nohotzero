#include<iostream>
using namespace std;
string add(string s1,string s2){
    string res;
    int len1=s1.length();
    int len2=s2.length();
    if(len1>len2){
        for(int i=0;i<len1-len2;i++){
            s2='0'+s2;
        }
    }
    if(len1<len2){
        for(int i=0;i<len2-len1;i++){
            s1='0'+s1;
        }
    }
int len=s2.length();
int temp;
    int jw=0;
for(int i=len-1;i>=0;i--){
    temp=s1[i]-'0'+s2[i]-'0'+jw;
    jw=temp/10;
    temp%=10;
    res=char(temp+'0')+res;
}
if(jw!=0){
    res=char(jw+'0')+res;
}
return res;




}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<add(a,b);
}