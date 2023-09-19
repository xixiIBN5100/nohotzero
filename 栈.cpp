#include <iostream>
using namespace std;
const int N =10000;
int stk[N];
int top = 0;
void push(int x){
    stk[++top] = x;
}
void pop(){
    top--;
}
void query(){
    if(top==0){
        cout<<" Anguei!"<<endl;
    }
    cout<<stk[top]<<endl;
}
int main(){
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        push(x);
    }
    for(int j=0;j<7;j++){
        if(top==0){
            cout<<"empyt"<<endl;
            break;
        }
    cout<<stk[top]<<endl;
        pop();
    }
}