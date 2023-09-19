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
string mul(string str1,string str2)
{
    if(str1=="0"||str2=="0"){
        return "0";
    }
    string str;
    int len1=str1.length();
    int len2=str2.length();
    string tempstr;
    for(int i=len2-1;i>=0;i--)
    {
        tempstr="";
        int temp=str2[i]-'0';
        int t=0;
        int cf=0;
        if(temp!=0)
        {
            for(int j=1;j<=len2-1-i;j++){
                tempstr+="0";
            }
            for(int j=len1-1;j>=0;j--){
                 t=(temp*(str1[j]-'0')+cf)%10; 
                cf=(temp*(str1[j]-'0')+cf)/10;
               
               tempstr=char(t+'0')+tempstr;
   
            }
            if(cf!=0){
                tempstr=char(cf+'0')+tempstr;
            }
       
    }
    str = add(str,tempstr);
}
str.erase(0,str.find_first_not_of('0'));
   
 return str;
}
int main(){
    
      string a,b;
      cin>>a>>b;
      cout<<mul(a,b);

}
