#include <iostream>
#include <map>
#include <ctime>

using namespace std;

// Vehicle class to store vehicle details
class Vehicle {
private:
    string type;
    string company;
    string nameplate;
public:
    Vehicle(string type, string company, string nameplate) : type(type), company(company), nameplate(nameplate) {}

    string getType() const {
        return type;
    }

    string getCompany() const {
        return company;
    }

    string getNameplate() const {
        return nameplate;
    }
};

// CarRentalSystem class to handle the rental system
class CarRentalSystem {
private:
    map<string, string> users; // Map to store unique usernames and passwords
    // Sample vehicles
    Vehicle vehicles[3] = {
            Vehicle("Car", "Toyota", "XYZ123"),
            Vehicle("Scooter", "Honda", "ABC456"),
            Vehicle("Bike", "Yamaha", "DEF789")
    };
    int numVehicles = 3;
    bool loggedIn = false;
    string loggedInUser;

public:
    // Function to register a new user
    bool registerUser(string username, string password) {
        if (users.find(username) != users.end()) {
            // Username already exists
            cout << "Username already exists. Please choose a different username." << endl;
            return false;
        } else {
            users[username] = password;
            cout << "User registered successfully!" << endl;
            return true;
        }
    }

    // Login function
    bool login(string username, string password) {
        if (users.find(username) != users.end() && users[username] == password) {
            loggedIn = true;
            loggedInUser = username;
            return true;
        } else {
            return false;
        }
    }

    // Function to display vehicle details
    void displayVehicles() {
        for (int i = 0; i < numVehicles; ++i) {
            cout << i + 1 << ". Type: " << vehicles[i].getType() << ", Company: " << vehicles[i].getCompany()
                 << ", Nameplate: " << vehicles[i].getNameplate() << endl;
        }
    }

    // Function to handle renting
    void rentVehicle(int choice) {
        if (choice >= 1 && choice <= numVehicles) {
            // Perform renting operations
            cout << "Renting " << vehicles[choice - 1].getType() << " with nameplate "
                 << vehicles[choice - 1].getNameplate() << endl;
            // Include fare calculation and other rental operations here
        } else {
            cout << "Invalid choice!" << endl;
        }
    }

    // Function to extend rental time
    void extendRental() {
        // Include logic to extend rental time
    }

    // Function to return rented vehicle
    void returnVehicle() {
        // Include logic to return vehicle
    }
};

int main() {
    CarRentalSystem rentalSystem;
    string username, password;
    int choice;

    // Registration loop
    do {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
    } while (!rentalSystem.registerUser(username, password));

    cout << "Registration successful!" << endl;

    // Login loop
    do {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
    } while (!rentalSystem.login(username, password));

    cout << "Login successful!" << endl;

    // Menu loop
    do {
        cout << "\nMain Menu\n";
        cout << "1. Display Vehicles\n";
        cout << "2. Rent Vehicle\n";
        cout << "3. Extend Rental Time\n";
        cout << "4. Return Rented Vehicle\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                rentalSystem.displayVehicles();
                break;
            case 2:
                rentalSystem.displayVehicles();
                cout << "Enter the number corresponding to the vehicle you want to rent: ";
                cin >> choice;
                rentalSystem.rentVehicle(choice);
                break;
            case 3:
                rentalSystem.extendRental();
                break;
            case 4:
                rentalSystem.returnVehicle();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}
