#include<iostream>
using namespace std;
class person{
    public:
  person(int a,int b,int c):m_a(a),m_b(b),m_c(c)
  {

  }

  int m_a;
  int m_b;
  int m_c;
};
void test01(){
    person p1(1,2,3);
    cout<<p1.m_a<<endl;
}
int main(){
    test01();
}
