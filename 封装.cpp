#include<iostream>
using namespace std;
class square{
    public:
    int a;
    int f1(){
        return a*4;
    }

};
int main(){
    square s1;
    s1.a=4;
    cout<<s1.f1() <<endl;
}
