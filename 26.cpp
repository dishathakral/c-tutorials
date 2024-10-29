#include<iostream>
using namespace std;

enum STATUS {freshman, sophomore, junior, senior};
enum RANK {lecturer, assistant_professor, associate_professor};
enum TITLE {HR, IT_SUPPORT, CUSTOMER_SERVICE, ADMINISTRATIVE_ASSISTANT};

class Person {
public:
    string name;
    string address;
    string phone_number;
    string email_address;
    // Default constructor with default parameter values
    Person(string n = "", string a = "", string p = "", string e = "") {
        name = n;
        address = a;
        phone_number = p;
        email_address = e;
    }
};

class MyDate {
public:
    int year;
    string month;
    string day;
    // Default constructor with default parameter values
    MyDate(int year = 0, string month = "", string day = "") {
        this->year = year;
        this->month = month;
        this->day = day;
    }
};

class Employee : public Person {
public:
    string office;
    float salary;
    MyDate hire_date;

    // Default constructor with default parameter values
    Employee(string n = "", string a = "", string p = "", string e = "", string o = "", float s = 0, MyDate d = MyDate())
        : Person(n, a, p, e), office(o), salary(s), hire_date(d) {}
};

class FullTimeStaff : public Employee {
public:
    TITLE title;
    FullTimeStaff(string n = "", string a = "", string p = "", string e = "", string o = "", float s = 0, MyDate d = MyDate(), TITLE t = HR)
        : Employee(n, a, p, e, o, s, d), title(t) {}

    // Function to input data
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter phone number: ";
        cin >> phone_number;
        cout << "Enter email address: ";
        cin >> email_address;
        cout << "Enter office: ";
        cin >> office;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter hire date (year month day): ";
        cin >> hire_date.year >> hire_date.month >> hire_date.day;
        cout << "Enter title (HR = 0, IT_SUPPORT = 1, CUSTOMER_SERVICE = 2, ADMINISTRATIVE_ASSISTANT = 3): ";
        int titleInput;
        cin >> titleInput;
        title = static_cast<TITLE>(titleInput);
    }
};

class PartTimeStaff : public Employee {
public:
    TITLE title;
    float work_hours;
    PartTimeStaff(string n = "", string a = "", string p = "", string e = "", string o = "", float s = 0, MyDate d = MyDate(), TITLE t = HR, float wh = 0)
        : Employee(n, a, p, e, o, s, d), title(t), work_hours(wh) {}

    // Function to input data
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter phone number: ";
        cin >> phone_number;
        cout << "Enter email address: ";
        cin >> email_address;
        cout << "Enter office: ";
        cin >> office;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter hire date (year month day): ";
        cin >> hire_date.year >> hire_date.month >> hire_date.day;
        cout << "Enter title (HR = 0, IT_SUPPORT = 1, CUSTOMER_SERVICE = 2, ADMINISTRATIVE_ASSISTANT = 3): ";
        int titleInput;
        cin >> titleInput;
        title = static_cast<TITLE>(titleInput);
        cout << "Enter work hours: ";
        cin >> work_hours;
    }
};

int main() {
    FullTimeStaff fullTimeStaff;
    PartTimeStaff partTimeStaff;

    // Input data for full-time staff
    cout << "Enter data for Full-time staff:" << endl;
    fullTimeStaff.inputData();

    // Input data for part-time staff
    cout << "\nEnter data for Part-time staff:" << endl;
    partTimeStaff.inputData();

    // Displaying salaries
    cout << "\nFull-time staff salary: $" << fullTimeStaff.salary << endl;
    cout << "Part-time staff salary: $" << partTimeStaff.salary << endl;

    return 0;
}
