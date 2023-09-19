#include<iostream>
using namespace std;
class person {
    public:
    person(int age){
    this->age=age;//this指针捏
    }

    static int age;
};
int person::age;
void test01(){
    person p1(12);
    person p2(13);
    cout<<p1.age<<endl;

}
int main(){
    test01();
}