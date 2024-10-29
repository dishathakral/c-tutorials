#include<stdio.h>
#include<string.h>

#define MAX_CONTACTS 7
#define MAX_NAME 20
#define MAX_NUMBER 12

typedef struct {
    char names[MAX_NAME];
    char phone_number[MAX_NUMBER];
} contact;

contact contacts[MAX_CONTACTS]; // Moved array declaration after structure definition

void find() {
    char search_name[MAX_NAME];
    printf("Enter the name of the person you want to search: ");
    scanf("%s", search_name);

    // Search for the person
    int found = 0;
    for (int i = 0; i < MAX_CONTACTS; i++) {
        if (strcmp(contacts[i].names, search_name) == 0) {
            printf("Phone Number for %s: %s\n", search_name, contacts[i].phone_number);
            found = 1;
            break;
        }
    }
    if (found==0) {
        printf("No contact found with name %s\n", search_name);
    }
}

int main() {
    strcpy(contacts[0].names, "disha");
    strcpy(contacts[0].phone_number, "8168220353");
    strcpy(contacts[1].names, "palak");
    strcpy(contacts[1].phone_number, "8168226789");
    strcpy(contacts[2].names, "shruti");
    strcpy(contacts[2].phone_number, "8165674353");
    strcpy(contacts[3].names, "isha");
    strcpy(contacts[3].phone_number, "9998220353");
    strcpy(contacts[4].names, "ashima");
    strcpy(contacts[4].phone_number, "8169020353");
    strcpy(contacts[5].names, "john");
    strcpy(contacts[5].phone_number, "8168274251");
    strcpy(contacts[6].names, "zeeman");
    strcpy(contacts[6].phone_number, "81098220353");
    
    char decision;
    printf("Do you want to see phone contact book (yes/no): ");
    scanf(" %c", &decision); // Corrected input reading

    if (decision == 'y' || decision == 'Y') {
        printf("Contacts:\n");
        for (int i = 0; i < MAX_CONTACTS; i++) {
            printf("Name: %s, Phone Number: %s\n", contacts[i].names, contacts[i].phone_number);
        }
        find();
    } 
    else {
        find(); // Moved function call outside the loop
    }

    return 0;
}


