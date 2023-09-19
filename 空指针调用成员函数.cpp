#include<iostream>
using namespace std;
class person{
    public:
    void f1(){
        cout<<"function1"<<endl;
    }
    void f2(){
        cout<<"function2"<<endl;
    }
    int m_age;
};

void test01(){
    person *p=NULL;
    p->f1();
    p->f2();//空指针指向的函数不能调用类中的参数   类中参数自带this指针
}
int main(){
    test01();
}
