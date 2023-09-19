#include<iostream>
using namespace std;
struct student//定义结构体
    {
        string name;
        int age;
        int scroce;
    };
int main(){
    //定义结构体数组
    student studentarr[3]={
    {"张三",18,100},
    {"李四",28,39},
    {"王武",33,89}
    };
    studentarr[2].age=22;
    studentarr[1].scroce=100;
    for(int i=0;i<3;i++){
        cout<<studentarr[i].age
            <<studentarr[i].name
            <<studentarr[i].scroce<<endl;
    }
    
}