#include<iostream>
using namespace std;
enum STATUS{freshman,sophmore,junior,senior};
enum RANK{lecturer,assistant_professor,associate_professor,};
enum TITLE{HR,IT_SUPPORT,CUSTOMER_SERVICE,ADMINISTRATIVE_ASSISTANT};

class person{
    public:
    string name;
    string address;
    string phone_number;
    string email_address;
    person(string n,string a,string p,string e){
        name=n;
        address=a;
        phone_number=p;
        email_address=e;

    }
};
class MYDATE{
    int year;
    string month;
    string day;
    MYDATE(int year,string month,string day){
        this ->year=year;
        this ->month=month;
        this -> day=day;
    }

};

class student:public person{
    person:
    STATUS status
    student(){}
    student(string n,string a,string p,string e,string s):person(n,a,p,e,s)
     status=s;
     status->status;
    };
   


class employee:public person{
    public:
    string office;
    float salary;
    MYDATE hire_date;

    employee(string n,string a,string p,string e,string o,flaot s,MYDATE d):person(n,a,p,e){
    office=o;
    salary=s;
    hire_date=d;
}
};
class faculty:public employee{

    public:

    float hours;
    RANK rank;
    faculty(string n,string a,string p,string e,string o,flaot s,MYDATE d,flaot h,RANK r):employee(n,a,p,e,o,s,d){
        hours=h;
        rank=r;
    }
};
class staff_member:public employee{
    TITLE title;
    staff_member(string n,string a,string p,string e,string o,flaot s,MYDATE d,TITLE t):employee(n,a,p,e,o,s,d){
        title=t;
    }
};
int main(){

}