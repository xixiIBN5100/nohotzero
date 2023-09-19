#include <iostream>
using namespace std;
struct student{
    string name;
    int age;
    int score;
};
void f1(student s){
    s.score=60;
    cout<<s.score<<endl;
}
void f2(student*p){
    p->score=60;
    cout<<p->score;
}


int main(){
    student s1={"张三",18,100};
    cout<<s1.score<<endl;
    f1(s1);
    f2(&s1);
}