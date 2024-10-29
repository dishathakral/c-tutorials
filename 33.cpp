#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    char level;
    public:
    hero(int health,char level){
         this-> level=level;
          this-> health=health;
    }
    void set_health(int health){
        this-> health=health;
    }
    void set_level(char level){
        this-> level=level;
    }
    int get_health(){
        cout<<"health is"<<health<<endl;
    }
    char get_level(){
        cout<<"level is"<<level<<endl;
    }
};

    int main(){
        hero ramesh(70,'a');
        ramesh.get_health();
        

    }



