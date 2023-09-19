#include<iostream>
using namespace std;
struct student{
    string name;
    int age;
    int scroce;
};
int main(){
    student s1={"张三",20,90};
    student *p=&s1;//用结构体定义指针
    cout<<p->age<<endl;//用指针访问s1

}