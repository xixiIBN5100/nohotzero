#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s1.size();i++){
        s1[i]=tolower(s1[i]);
    }
    for(int i=0;i<s2.size();i++){
        s2[i]=tolower(s2[i]);
    }
    s1 = ' ' + s1 + ' ';  
    s2 = ' ' + s2 + ' ';
    int pos=s2.find(s1);
    int mun=s2.find(s1);
    int ans=0;
    if(pos==string::npos){
        cout<<-1<<endl;
    }else{
        while(mun!=string::npos){
            ans++;
            mun=s2.find(s1,mun+1);
        }
         cout<<ans<<" "<<pos<<endl;
    }
   

    return 0;
}