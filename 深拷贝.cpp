#include<iostream>
using namespace std;
class person{
public:
person(int age){
    m_age=new int(age); 

}

 person (const person& p){
     cout<<"深拷贝构造函数"<<endl;
    m_age=new int(*p.m_age);
   
  }
~person(){
    if(m_age!=NULL){
        delete m_age;
        m_age=NULL;
    }//释放内存
}

int* m_age;
} ;
void test01(){
    person p1(12);
    person p2(p1);
    cout<<*p1.m_age<<endl;
    cout<<*p2.m_age<<endl;
    
    }
    int main(){
        test01();
    }