#include<iostream>
using namespace std;

class Book {
    string title;
    int pages;
    float cost;
public:
    // Default constructor
    Book(): title(""), pages(0), cost(0.0) {}

    // Parameterized constructor
    Book(string t, int p, float c) : title(t), pages(p), cost(c) {}

    // Copy constructor
    Book(const Book &o) : title(o.title), pages(o.pages), cost(o.cost) {}

    void info() {
        cout << "Title: " << title << endl;
        cout << "Pages: " << pages << endl;
        cout << "Cost: " << cost << endl;
    }

    // Function to calculate the cost of the book
    float calculateCost() const {
        return cost;
    }
};

class SchoolBook : public Book {
private:
    string subject;
    string Class;
public:
    // Default constructor
    SchoolBook() : Book(), subject(""), Class("") {}

    // Parameterized constructor
    SchoolBook(string t, int p, float c, string s, string cls) : Book(t, p, c), subject(s), Class(cls) {}

    void info() {
        Book::info(); // Call info() of base class
        cout << "Subject: " << subject << endl;
        cout << "Class: " << Class << endl;
    }
};

int main() {
    // Creating a Book object using constructor with parameters
    Book book1("oops Programming", 300, 250);
    cout << "Book 1:" << endl;
    book1.info();

    // Creating a SchoolBook object using constructor with parameters
    SchoolBook book2("let us c",650 , 300, "programming","11");
    cout << "\nBook 2:" << endl;
    book2.info();

    // Creating another Book object using copy constructor
    Book book3 = book1;
    cout << "\nBook 3 (Copy of Book 1):" << endl;
    book3.info();

    // Function to calculate the cost of a book purchased by the user
    string title;
    int pages;
    float cost
    int number;

    cout << "\nEnter details of the book purchased:" << endl;
    cout << "Title: ";
    getline(cin, title);
    cout << "Pages: ";
    cin >> pages;
    cout << "Cost: ";
    cin >> cost;
    cout<<"number";
    cin>>number;

    Book userBook(title, pages, cost);
    cout << "\nCost of the book purchased: $" << userBook.calculateCost()*number << endl;

    return 0;
}
