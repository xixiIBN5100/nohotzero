#include<iostream>
using namespace std;
class building{
    friend class topman;//声明友元
    public:
    building();
    string m_freeroom;
    private:
    string m_bedroom;
};
building::building(){
    m_bedroom="内部数据";
    m_freeroom="公开数据";
}

class topman{
    public:
    topman();
    void visit();
    building *m_building;
};
topman::topman(){
    m_building=new building;
}
void topman::visit(){
    cout<<m_building->m_freeroom<<endl;
    cout<<m_building->m_bedroom<<endl;
}
int main(){
    topman he;
    he.visit();
    
    
}


