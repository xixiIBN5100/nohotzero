#include<iostream>
#include<set>
using namespace std;
char arr[100][100]={0};
int  a[26];
int findMax(int arr[], int size) {
    if (size == 0) {
        // 如果数组为空，返回 -1（或其他适当的值）
        return -1;
    }

    int maxVal = arr[0]; // 假设最大值为数组第一个元素

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // 更新最大值
        }
    }

    return maxVal;
}
int findszichuan(string s1,char s2){
    int pos=0;
    int ans=0;
    while(s1.find(s2,pos)!=string::npos){
        int num=s1.find(s2,pos);
         ans++;
         pos=num+1;
    }
    return ans;
}
int main(){
     string s1;
     string s2="";
     while(getline(cin,s1)&&!s1.empty()){
        s2+=s1;
     }
    for(int i =0;i<26;i++){
        a[i]=findszichuan(s2,'A'+i);
    }
 int maxn=0;
    for(int i=0;i<26;i++){
        maxn=max(maxn,a[i]);
    }
    for(int i=maxn;i>0;i--){
        for(int j=0;j<26;j++){
            if(a[j]>i-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
     for(int i=0;i<25;i++){
        cout<<static_cast<char>('A'+i)<<" ";
     }
     cout<<'Z';
}