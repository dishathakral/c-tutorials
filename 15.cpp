#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 3;

class Item {
private:
    int itemcode[MAX_ITEMS] = {112, 332, 2244};
    string itemNames[MAX_ITEMS] = {"Laptop", "Smartphone", "Headphones"};
    double itemPrices[MAX_ITEMS] = {80000, 12000, 3000};

public:
    void bill() {
        cout << "All shop items:" << endl;
        for (int i = 0; i < MAX_ITEMS; ++i) {
            cout << "Name: " << itemNames[i] << ", Price: " << itemPrices[i] << ", Item code: " << itemcode[i] << endl;
        }
        int n;
        cout << "Enter the number of products: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            int itemCode;
            cout << "Enter item code: ";
            cin >> itemCode;
            int itemQuantities;
            cout << "Enter quantity: ";
            cin >> itemQuantities;
            cout << "\nRetrieving item: " << itemCode << endl;
            bool found = false;
            for (int j = 0; j < MAX_ITEMS; ++j) {
                if (itemcode[j] == itemCode) {
                    cout << "Item found: ";
                    cout << "Name: " << itemNames[j] << endl
                         << "Price: Rupees " << itemPrices[j] << endl
                         << "Quantity: " << itemQuantities << endl
                         << "Total price: Rupees " << itemPrices[j] * itemQuantities << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Item not found." << endl;
            }
        }
    }
};

int main() {
    Item item;
    item.bill();

    return 0;
}
