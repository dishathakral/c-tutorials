#include<bits/stdc++.h>
using namespace std;
struct question{
string ques;
string options[3];
};
int main(){
 question q1;
 q1.ques="what is the smallest country?";
 q1.options[3]={"usa","vatican city","india"};

 
}

#include <iostream>
#include <string>

struct StructureName {
    // Data members (attributes or variables)
    data_type member1;
    data_type member2;

    // Constructor (optional)
    StructureName(data_type param1, data_type param2) {
        member1 = param1;
        member2 = param2;
    }

    // Member function (optional)
    void display() {
        std::cout << "Member 1: " << member1 << std::endl;
        std::cout << "Member 2: " << member2 << std::endl;
    }
};

int main() {
    // Creating an object of the structure and passing values to the constructor
    StructureName obj(value1, value2);

    // Calling the member function to display the values
    obj.display();

    return 0;
}
