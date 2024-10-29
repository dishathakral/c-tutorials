#include<iostream>
using namespace std;
class time{
    private:
 int hours;
 int minutes;
 public:
 
 time(int c){
    hours=c/60;
    minutes=c%60;

 }
 void disp(){
    cout<<hours<<"hours"<<minutes<<"minutes";
 }

};
int main(){
    time t1(100);
    t1.disp();
    return 0;
}

