#include<iostream>
#include<iomanip>
using namespace std;
struct point
{
    double x;
    int y;
};
double distant(point a,point b){
    int z=(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
    double m =pow(z,0.5);
    return m;
}

int main(){
    point p[3];
    for(int i=0;i<3;i++){
        cin>>p[i].x>>p[i].y;
    }
    double q1=distant(p[0],p[1]);
    double q2=distant(p[0],p[2]);
    double q3=distant(p[1],p[2]);
    cout<<fixed<<setprecision(2)<<q1+q2+q3;
}