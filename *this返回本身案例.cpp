#include<iostream>
using namespace std;
class person{
    public:
    person& f1(person &p){//注意函数引用
        age+=p.age;
        return *this;
    }

    int age;
};
void test01(){
    person p1;
    p1.age=10;
    person p2;
    p2.age=10;
    p2.f1(p1).f1(p1).f1(p1).f1(p1);//链式编程
    cout<<p2.age<<endl;
}
int main(){
    test01();
}