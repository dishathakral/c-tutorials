#include<iostream>
using namespace std;
class employee{
private:
    string name;
    string gender;
    int age;
public:
   void setname(string name){
        this->name=name;
    } 
    string getname(){
        return name;
    }   
    
    void introduction(){
        cout<<"hi! my name is "<<name<<endl;
        cout<<"I am "<<gender<<"."<<"my age is "<<age<<endl;

    }
    employee(){
        cout<<"default constructor"<<endl;
    }
    employee(string name,string gender,int age){
        this ->name=name;
        this ->gender=gender;
        this ->age=age;
    }
    void askforpermission(){
        if(age>30){
            cout<<name<<" congratulations! you get promoted."<<endl;
        }
        else{
            cout<<name<<" sorry! you are not promoted."<<endl;
        }
    }
};
int main(){
    employee employee1("DISHA","FEMALE",25);
    employee1.introduction();
    employee employee2("john","male",35);
    employee2.introduction();
    employee1.askforpermission();
    employee2.askforpermission();


}
    