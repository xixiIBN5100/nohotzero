#include <iostream>
#include<ctime>
using namespace std;
struct student{
    string name;
    int score;
}; 
struct teacher{
    string name;
    student sarr[5];
};
int main(){
         srand((unsigned int)time(NULL));
    string a="ABCDE";
   teacher tarr[3];
   for(int i=0;i<3;i++){
    tarr[i].name="teacher_";
    tarr[i].name+=a[i];
    for(int j=0;j<5;j++){
    tarr[i].sarr[j].name="student_";
    tarr[i].sarr[j].name+=a[j];
     int random=rand() % 60+40;
    tarr[i].sarr[j].score=random;
    }
   }
   for(int i=0;i<3;i++){
    cout<<"老师姓名:  "<<tarr[i].name<<endl;
    for(int j=0;j<5;j++){
        cout<<"学生姓名:  "<<tarr[i].sarr[j].name<<"     ";
        cout<<"学生分数:  "<<tarr[i].sarr[j].score<<endl;
        
    }
    cout<<endl;
   }

}