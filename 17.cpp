#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 3;

class Item {
private:
    int itemcode[MAX_ITEMS] = {112, 332, 2244};
    string itemNames[MAX_ITEMS] = {"Laptop", "Smartphone", "Headphones"};
    double itemPrices[MAX_ITEMS] = {80000, 12000, 3000};
    int itemQuantities[MAX_ITEMS] = {0}; // Initialize all quantities to zero
    double totalBill = 0; // Initialize total bill to zero

public:
    // Constructor to initialize default quantities
    Item() {
        for (int i = 0; i < MAX_ITEMS; ++i) {
            itemQuantities[i] = 10; // Set default quantity for each item to 10
        }
    }

    void bill() {
        cout << "All shop items:" << endl;
        for (int i = 0; i < MAX_ITEMS; ++i) {
            cout << "Name: " << itemNames[i] << ", Price: " << itemPrices[i] << ", Item code: " << itemcode[i] << ", Quantity: "
         << itemQuantities[i] << endl;}
        int n;
        cout << "Enter the number of products: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            int itemCode;
            cout << "Enter item code: ";
            cin >> itemCode;
            int itemQuantity;
            cout << "Enter quantity: ";
            cin >> itemQuantity;
            cout << "\nRetrieving item: " << itemCode << endl;
            bool found = false;
            for (int j = 0; j < MAX_ITEMS; ++j) {
                if (itemcode[j] == itemCode) {
                    cout << "Item found: ";
                    cout << "Name: " << itemNames[j] << endl
                         << "Price: Rupees " << itemPrices[j] << endl
                         << "Quantity: " << itemQuantity << endl
                         << "Total price: Rupees " << itemPrices[j] * itemQuantity << endl;
                    totalBill += itemPrices[j] * itemQuantity; // Add the item's total price to the total bill
                    itemQuantities[j] -= itemQuantity; // Update the total quantity
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Item not found." << endl;
            }
        }
        cout << "\nTotal bill: Rupees " << totalBill << endl;
    }
};

int main() {
    Item item;
    item.bill();

    return 0;
}
