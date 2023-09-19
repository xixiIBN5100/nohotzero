#include<iostream>
#include <algorithm>
#include <cctype>
using namespace std;
int main(){
    int p1,p2,p3;
    string s;
    cin>>p1>>p2>>p3;
    cin>>s;
    if(p1==1&&p3==1){
        string temps;
        for(int i=0;i<s.length();i++){
             if(s[i]=='-'&&((26 > s[i+1] - s[i-1]) && (s[i+1] - s[i-1] > 0))&&s[i+1]!='-'&&s[i-1]!='-'){
                int a=s[i+1];
                int b=s[i-1];
                s[i+1]=tolower(s[i+1]);
                s[i-1]=tolower(s[i-1]);
                int begin=s[i-1]+1;
                int end=s[i+1];
                temps.clear();
                int n=0;
                  int pos=i;
                  int length = s[i+1]-s[i-1]-1;
                  for(int k=0;k<length;k++){
                    for(int j=0;j<p2;j++){
                        temps+=(char)begin;
                    }
                    begin++;
                  }
                  s[i+1]=a;
                  s[i-1]=b;
                  s.erase(pos,1);
                  s.insert(pos,temps);

             }
        }
    }
    if(p1==1&&p3==2){
        string temps;
        for(int i=0;i<s.length();i++){
             if(s[i]=='-'&&((26 > s[i+1] - s[i-1]) && (s[i+1] - s[i-1] > 0))&&s[i+1]!='-'&&s[i-1]!='-'){
                int a=s[i+1];
                int b=s[i-1];
                s[i+1]=tolower(s[i+1]);
                s[i-1]=tolower(s[i-1]);
                int begin=s[i-1]+1;
                int end=s[i+1];
                temps.clear();
                int n=0;
                  int pos=i;
                  int length = s[i+1]-s[i-1]-1;
                  for(int k=0;k<length;k++){
                    for(int j=0;j<p2;j++){
                        temps+=(char)begin;
                    }
                    begin++;
                  }
                  s[i+1]=a;
                  s[i-1]=b;
                  reverse(temps.begin(),temps.end());
                  s.erase(pos,1);
                  s.insert(pos,temps);

             }
        }
    }
     if(p1==2&&p3==1){
        string temps;
        for(int i=0;i<s.length();i++){
             if(s[i]=='-'&&((26 > s[i+1] - s[i-1]) && (s[i+1] - s[i-1] > 0))&&s[i+1]!='-'&&s[i-1]!='-'){
                int a=s[i+1];
                int b=s[i-1];
                s[i+1]=toupper(s[i+1]);
                s[i-1]=toupper(s[i-1]);
                int begin=s[i-1]+1;
                int end=s[i+1];
                temps.clear();
                int n=0;
                  int pos=i;
                  int length = s[i+1]-s[i-1]-1;
                  for(int k=0;k<length;k++){
                    for(int j=0;j<p2;j++){
                        temps+=(char)begin;
                    }
                    begin++;
                  }
                  s[i+1]=a;
                  s[i-1]=b;
                  s.erase(pos,1);
                  s.insert(pos,temps);

             }
        }
    }
    if(p1==2&&p3==2){
        string temps;
        
        for(int i=0;i<s.length();i++){
             if(s[i]=='-'&&((26 > s[i+1] - s[i-1]) && (s[i+1] - s[i-1] > 0))&&s[i+1]!='-'&&s[i-1]!='-'){
                int a=s[i+1];
                int b=s[i-1];
                s[i+1]=toupper(s[i+1]);
                s[i-1]=toupper(s[i-1]);
                int begin=s[i-1]+1;
                int end=s[i+1];
                temps.clear();
                int n=0;
                  int pos=i;
                  int length = s[i+1]-s[i-1]-1;
                  for(int k=0;k<length;k++){
                    for(int j=0;j<p2;j++){
                        temps+=(char)begin;
                    }
                    begin++;
                  }
                  s[i+1]=a;
                  s[i-1]=b;
                  reverse(temps.begin(),temps.end());
                  s.erase(pos,1);
                  s.insert(pos,temps);

             }
        }
    }
         if(p1==3){
        string temps;
        for(int i=0;i<s.length();i++){
             if(s[i]=='-'&&((26 > s[i+1] - s[i-1]) && (s[i+1] - s[i-1] > 0))){
                int begin=s[i-1]+1;
                temps.clear();
                int n=0;
                  int pos=i;
                  int length = s[i+1]-s[i-1]-1;
                  for(int k=0;k<length;k++){
                    for(int j=0;j<p2;j++){
                        temps+='*';
                    }
                    begin++;
                  }
                  s.erase(pos,1);
                  s.insert(pos,temps);

             }
        }
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='-'&&s[i+1]-s[i-1]==1){
            s.erase(i,1);
        }
    }
    cout<<s;
}