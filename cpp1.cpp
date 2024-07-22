#include <iostream>
using namespace std;
class supermarket{
    private:
    string pr_name;
    string pr_id;
    int pr_price;
    public:
    void putinfo(string name,string id,int price){
        pr_name=name;
        pr_id=id;
        pr_price=price;
    }
    void getinfo(){
        cout<<pr_name<<endl;
        cout<<pr_id<<endl; 
        cout<<pr_price<<endl;
    }
};

int main() {
   supermarket o1,o2,o3;
   string name[3],id[3];
   int price[3];
   for (int i = 0; i < 2; i++) {
   cin>>name[i];
    cin>>id[i];
     cin>>price[i];
   o1.putinfo(name[i],id[i],price[i]);
o1.getinfo();}
    return 0;
}