#include<iostream>
using namespace std;

class cube{
public:
int s(){
    return (a*b+b*c+c*a)*2;
}
int v(){
    return a*b*c;
}

void seta(int x){
    a=x;
}
int geta(){
    return a;
}
void setb(int y){
    b=y;
}
int getb(){
    return b;
}
void setc(int z){
    c=z;
}
int getc(){
    return c;
}
bool f1(cube c1){
    if(c1.a==a&&c1.b==b&&c1.c==c){
        return true;
    }
    return false;
}
private:
    int a,b,c;

};
bool f2(cube &c1,cube &c2){
    if(c1.geta()==c2.geta()&&c2.getb()==c1.getb()&&c1.getc()==c2.getc()){
        return true;
    } else{
    return false;
    }
}
int main(){
    cube c1,c2;
    c1.seta(10);
    c1.setb(10);
    c1.setc(10);
    cout<<c1.s()<<endl<<c1.v()<<endl;
    c2.seta(10);
    c2.setb(10);
    c2.setc(10);
    bool ret = f2(c1,c2);
    if(ret){
        cout<<"相等"<<endl;
    }else{
        cout<<"不相等"<<endl;
    }
    cout<<c1.f1(c2)<<endl;

    
}