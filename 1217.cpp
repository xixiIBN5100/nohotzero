#include<iostream>
using namespace std;
bool iszhishu(int a){
    for(int i=2;i<a;i++){
        if(a%2==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a,b;
    cin>>a>>b;
    vector<int>v;
    vector<int>v2;
    for (int d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
     for (int d2 = 0; d2 <= 9; d2++) {
         int q = 1000*d1 + 100*d2 + 10*d2 + d1;//(处理回文数...)
         v.push_back(q);
     }
 }
    for (int d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
     for (int d2 = 0; d2 <= 9; d2++) {
         for (int d3 = 0; d3 <= 9; d3++) {
           int l = 10000*d1 + 1000*d2 +100*d3 + 10*d2 + d1;//(处理回文数...)
           v.push_back(l);
         }
     }
 }
    for (int d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
     for (int d2 = 0; d2 <= 9; d2++) {
         for (int d3 = 0; d3 <= 9; d3++) {
             for(int d4 = 0;d4<=9;d4++){
                int c=1000000*d1+1000000*d2+100000*d3+10000*d4+1000*d4+100*d3+10*d2+d1;
                v.push_back(c);
             }
         }
     }
 }
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}}
// for(int i=0;i<v.size();i++){
//     if(iszhishu(v[i])){
//         v2.push_back(v[i]);
//     }
// }
// for(int i=0;i<v2.size();i++){
//     cout<<v2[i]<<" ";
// }


// sort(v2.begin(),v2.end());
// vector<int>::iterator it= v.begin();
// vector<int>::iterator it_=v.end();


//  for(int i = 0;i<v2.size();i++)
//     if(*it<a){
//         it++;
//     }
//     if(*it_>b){
//         it_--;
    
//  }
//  for(vector<int>::iterator a=it;a!=it_;a++){
//     cout<<*a<<endl;
//  }
     
// }