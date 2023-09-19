#include<iostream>
using namespace std;
string arr[100];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    string max="";
    int num=0;
    for(int i=1;i<=n;i++){
        if(max.length()<arr[i].length()){
            max=arr[i];
            num = i;
        }else if(max.length()==arr[i].length()){
            for(int j=0;j<max.length();j++){
                int cha=max[j]-arr[i][j];
                if(cha<0){
                    max=arr[i];
                    num = i;
                    break;
                } else if(cha > 0) {
                    break;
                }
            }
        }
    }
    cout<<num<<endl<<max;
}
