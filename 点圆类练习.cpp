#include<iostream>
using namespace std;
class point{
    public:
    void setc_x(double x1){
        x=x1;
    }
    double getc_x(){
        return x;
    }
    void setc_y(double y1){
        y=y1;
    }
    double getc_y(){
        return y;
    }

    private:
    double x;
    double y;
};
class circle{
    public:
    void setpoint(double x2,double y2){
        p1.setc_x(x2);
        p1.setc_y(y2);
    }
   void setm_r(double r){
        m_r=r;
    }
    double getpointx(){
        return p1.getc_x();
    }
    double getpointy(){
        return p1.getc_y();
    }
    double getm_r(){
        return m_r;
    }


    private:
    double m_r;
    point p1;
};
void f1(circle &c1,point &p2){
    double num1=(c1.getpointx()-p2.getc_x())*(c1.getpointx()-p2.getc_x())+(c1.getpointy()-p2.getc_y())*(c1.getpointy()-p2.getc_y());
    double num2=c1.getm_r();
    double num3=num2*num2;
    if(num1>num3){
        cout<<"点在圆外"<<endl;
    }else if(num1==num3){
        cout<<"点在圆上"<<endl;
    }else{
        cout<<"点在圆内"<<endl;
    }
}
int main(){
    point p2;
    p2.setc_x(4);
    p2.setc_y(3);
    circle c1;
    c1.setm_r(5);
    c1.setpoint(0,0);
    f1(c1,p2);

    // double num1=(c1.getpointx()-p2.getc_x())+(c1.getpointy()-p2.getc_y());
    // double num2=c1.getm_r();
    // double num3=num2*num2;
    // if(num1>num3){
    //     cout<<"点在圆外"<<endl;
    // }else if(num1==num3){
    //     cout<<"点在圆上"<<endl;
    // }else{
    //     cout<<"点在圆外"<<endl;
    // }
}
    

