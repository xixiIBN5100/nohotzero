#include<iostream>
using namespace std;
struct people{
    string name;
    int age;
    string sex;
};
int main(){
   people parr[4]={
    {"张飞",23,"男"},
    {"关羽",22,"男"},
    {"刘备",20,"男"},
    {"貂蝉",19,"女"}
   };
   int len =sizeof(parr)/sizeof(parr[0]);
   for(int i=0;i<len;i++){
    for(int j=0;j<len-1;j++){
        if(parr[j].age>parr[j+1].age){
            people temp=parr[j+1];
            parr[j+1]=parr[j];
            parr[j]=temp;//更简单的排序方法
            //  string temp1=parr[j+1].name;
            // parr[j+1].name=parr[j].name;
            // parr[j].name=temp1;
            //  string temp2=parr[j+1].sex;
            // parr[j+1].sex=parr[j].sex;
            // parr[j].sex=temp2;
        }
    }

   }
   for(int i=0;i<len;i++){
     cout<<parr[i].name<<"\t"<<parr[i].age<<"\t"<<parr[i].sex<<endl;
   }//可以运用函数进行打印



}