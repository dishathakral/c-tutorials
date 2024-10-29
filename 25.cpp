#include <iostream>
#include <map>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

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

class CarRentalSystem {
private:
    map<string, string> users;
    Vehicle vehicles[3] = {
            Vehicle("Car", "Toyota", "XYZ123"),
            Vehicle("Scooter", "Honda", "ABC456"),
            Vehicle("Bike", "Yamaha", "DEF789")
    };
    int numVehicles = 3;
    bool loggedIn = false;
    string loggedInUser;

public:
    bool registerUser(string username, string password) {
        if (users.find(username) != users.end()) {
            cout << "Username already exists. Please choose a different username." << endl;
            return false;
        } else {
            users[username] = password;
            cout << "User registered successfully!" << endl;
            return true;
        }
    }

    bool login(string username, string password) {
        if (users.find(username) != users.end() && users[username] == password) {
            loggedIn = true;
            loggedInUser = username;
            return true;
        } else {
            return false;
        }
    }

    void displayVehicles() {
        for (int i = 0; i < numVehicles; ++i) {
            cout << i + 1 << ". Type: " << vehicles[i].getType() << ", Company: " << vehicles[i].getCompany()
                 << ", Nameplate: " << vehicles[i].getNameplate() << endl;
        }
    }

    void rentVehicle(int choice,int day) {
        if (choice >= 1 && choice <= numVehicles) {
            cout << "Renting " << vehicles[choice - 1].getType() << " with nameplate "
                 << vehicles[choice - 1].getNameplate() << endl;
            // Call method to calculate fare
            calculateFare(choice - 1, day); // Pass the 'day' parameter
            // Include fare calculation and other rental operations here
        } else {
            cout << "Invalid choice!" << endl;
        }
    }

    void extendRental() {
        // Include logic to extend rental time
    }

    void returnVehicle() {
        // Include logic to return vehicle
    }

    // Method to calculate fare based on vehicle type, number of vehicles, and number of days
    void calculateFare(int vehicleIndex,int day) {
        // Fare calculation logic based on type of vehicle
        // For demonstration purposes, let's assume a simple fare calculation
        double baseFare;
        if (vehicles[vehicleIndex].getType() == "Car") {
            baseFare = 50.0;
        } else if (vehicles[vehicleIndex].getType() == "Scooter") {
            baseFare = 20.0;
        } else if (vehicles[vehicleIndex].getType() == "Bike") {
            baseFare = 10.0;
        }

        // Display fare to the user
        cout << "Base Fare for " << vehicles[vehicleIndex].getType() << ": $" << baseFare << endl;

        // Calculate total fare
        double totalFare = baseFare * day; // Multiply base fare by number of days

        // Display total fare
        cout << "Total Fare for " << day << " days: $" << totalFare << endl;
    }
};

int main() {
    CarRentalSystem rentalSystem;
    string username, password;
    int choice,days;

    do {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
    } while (!rentalSystem.registerUser(username, password));

    cout << "Registration successful!" << endl;

    do {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
    }
while (!rentalSystem.login(username, password));

    cout << "Login successful!" << endl;

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
                cout << "Enter the number of days you want to rent: ";
                cin >> days;
                
                rentalSystem.rentVehicle(choice,days);
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