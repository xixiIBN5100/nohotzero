#include<iostream>
using namespace std;
class person{
    public:
    person (int a){
        m_age=a;
        cout<<"调用参数函数"<<endl;
    }
    person(){
        cout<<"调用无参函数"<<endl;
    }
    person(const person &p){
        cout<<"调用拷贝函数"<<endl;
        m_age=p.m_age;
        
    }

    ~person(){
        cout<<"析构函数"<<endl;
    }
    int m_age;
};
void test01(){
    person p1;
    person p2(21);
    person p3(p2);
    cout<<p3.m_age;


}
int main(){
    test01();
}