#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand((unsigned int)time(NULL));
   int num=rand()%100;
    int num2;
    cout<<"请猜测随机数"<<endl;
while(1){cin>>num2;
    if(num>num2){
        cout<<"小了"<<endl;
    }else if(num<num2){
        cout<<"大了"<<endl;
    }else if(num=num2){
        cout<<"猜对了"<<endl;
        break; 
    }

}

return 0;

}

