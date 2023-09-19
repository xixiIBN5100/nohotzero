#include<iostream>
using namespace std;
class student{
    public:
     string s_name;
     int s_number;
void setname(string name){
    s_name=name;

}
void setnumber(int number){
   s_number=number;
}


     void print(){
        cout<<s_name<<endl<<s_number<<endl;
     }
};
int main (){
    student s1;
    s1.setnumber(34);
    s1.setname("张三");
    s1.print();
}