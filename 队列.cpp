#include <iostream>
using namespace std;
const int N=100005;
int que[N];
int tail,head;
bool empty(){
    if(head>tail){
        return true;
    }else{
    return false;
    }
}
void push(int x){
    que[++tail]=x;
}
void pop(){
     if(empty()){
        return;
     }
    head++;
}
int main(){
    tail=0;
    head=1;
    for(int i=1;i<=5;i++){
        int x;
        cin>>x;
        push(x);
    }
    for(int i=1;i<=6;i++){
        if(empty()){
            cout<<"empty"<<endl;
            break;
        }
        cout<<que[head]<<endl;
        pop();
    }
}