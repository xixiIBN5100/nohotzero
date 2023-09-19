#include<iostream>
using namespace std;
int L;
bool iszhishu(int &a){
    if(a==2){
        return 1;
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int sum(vector<int>&v1){
    int a=0;
    for(int i=0;i<v1.size();i++){
        a+=v1[i];
    }
    return a;
}
void print(vector<int>&v2){
    for(vector<int>::iterator it=v2.begin();it!=v2.end()-1;it++){
        cout<<*it<<endl;
    }
}
int main(){
    cin>>L;
    vector<int>v;
    for(int i=2;i<1500;i++){
        if(iszhishu(i)){
           v.push_back(i);
        }
        if(sum(v)>L){
          print(v);
          cout<<v.size()-1;
          break;
        }
    }
}