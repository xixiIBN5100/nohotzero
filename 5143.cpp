#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
struct point{
    int x,y,z;
}p[50001];
bool sort_(point p1,point p2){
    return p1.z<p2.z;
}
double jl(point p1,point p2){
    double x = (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)+(p1.z-p2.z)*(p1.z-p2.z);
    double y = pow(x,0.5);
    return y;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y>>p[i].z;
    }
    sort(p,p+n,sort_);
    double ans = 0;
    for(int i=0;i<n-1;i++){
        ans += jl(p[i],p[i+1]);
    }
    cout<<fixed<<setprecision(3)<<ans;
}