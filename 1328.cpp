#include<iostream>
using namespace std;
char map[12][12];
int flag[12][12];
int cow[3];
int people[3];//0上 1右 2左 3下          0牛 1人
void move(int x,int y,int face,int project){
     if(face==0){
        if(map[x-1][y]=='*'){
            if(project==0){
                cow[0]=1;
            }else{
                people[0]=1;
            }
        }else{
            if(project==0){
                cow[1]--;
            }else{
                people[1]--;
            }
        }
     }else if(face==1){
        if(map[x][y+1]=='*'){
            if(project==0){
                cow[0]=2;
            }else{
                people[0]=2;
            }
        }else{
        if(project==0){
                cow[2]++;
            }else{
                people[2]++;
            }
        }
     }else if(face==2){
        if(map[x+1][y]=='*'){
            if(project==0){
                cow[0]=3;
            }else{
                people[0]=3;
            }
        }else{
            if(project==0){
                cow[1]++;
            }else{
                people[1]++;
            }
        }
     }else{
        if(map[x][y-1]=='*'){
            if(project==0){
                cow[0]=0;
            }else{
                people[0]=0;
            }
        }else{
            if(project==0){
                cow[2]--;
            }else{
                people[2]--;
            }
        }
     }
}
bool pd(){
    if(cow[1]==people[1]&&cow[2]==people[2]){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    bool arr[200005];
    int ans=0;
    cow[0]=0;
    people[0]=0;
    for(int i=0;i<12;i++){
        map[i][11]='*';
        map[11][i]='*';
        map[0][i]='*';
        map[i][0]='*';
    }
    for(int i=1;i<11;i++){
        for(int j=1;j<11;j++){
            cin>>map[i][j];
            if(map[i][j]=='F'){
                people[1]=i;
                people[2]=j;
            }
            if(map[i][j]=='C'){
                cow[1]=i;
                cow[2]=j;
            }
        }
    }
     int tzz=0;
   while(pd()){
    tzz=cow[1]+cow[2]*10+people[1]*100+people[2]*1000+cow[0]*10000+people[0]*40000;
    if(arr[tzz]){
        cout<<0<<endl;
        return 0;
    }
    arr[tzz]=1;
    move(cow[1],cow[2],cow[0],0);
    move(people[1],people[2],people[0],1);
    ans++;
   }
   cout<<ans<<endl;
   return 0;
    

}