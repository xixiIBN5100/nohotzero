#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
   string s;
   string s1;
   string s2;
   getline(cin,s);
   if(s.find('.')!=string::npos){
    int pos=s.find('.');
    s1=s.substr(0,pos);
    s2=s.substr(pos+1,s.size()-pos-1);
    reverse(s1.begin(),s1.end());
    for(int i =0;i<s1.size();i++){
        if(s1[i]=='0'){
            s1.replace(i,1,"");
            i--;
        }else{
            break;
        }
    }
    reverse(s2.begin(),s2.end());
    for(int i=s2.size()-1;i>=0;i--){
        if(s2[i]=='0'){
             s2.replace(i,1,"");
        }else{
            break;
        }
    }
    if(s2.size()==0&&s2.size()==0){
        cout<<0;
    }else if(s2.size()==0){
       cout<<s1<<".0";
    }else{
   
   cout<<s1<<'.'<<s2;}
   }else if(s.find('/')!=string::npos){
    int pos=s.find('/');
    s1=s.substr(0,pos);
    s2=s.substr(pos+1,s.size()-pos-1);
    reverse(s1.begin(),s1.end());
    for(int i =0;i<s1.size();i++){
        if(s1[i]=='0'){
            s1.replace(i,1,"");
            i--;
        }else{
            break;
        }
    }
    reverse(s2.begin(),s2.end());
    for(int i=s2.size()-1;i>=0;i--){
        if(s2[i]=='0'){
             s2.replace(i,1,"");
        }else{
            break;
        }
    }
    if(s1.size()==0){
        cout<<0;
    }else{
    cout<<s1<<'/'<<s2;
    }
   }else if(s.find('%')!=string::npos){
         reverse(s.begin(),s.end()-1);
        for(int i =0;i<s.size();i++){
        if(s[i]=='0'){
            s.replace(i,1,"");
            i--;
        }else{
            break;
        }
    }
    cout<<s;
   }else{
    if(s.size()==1&&s[0]=='0'){
        cout<<0;
    }
    reverse(s.begin(),s.end());
    for(int i =0;i<s.size();i++){
        if(s[i]=='0'){
            s.replace(i,1,"");
            i--;
        }else{
            break;
        }

   }
   cout<<s;

}}