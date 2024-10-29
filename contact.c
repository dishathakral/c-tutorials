#include<stdio.h>
#include<string.h>
#define MAX_CONTACTS 7
#define MAX_NAME 20
#define MAX_NUMBER 12
typedef struct{
    char names[MAX_NAME];
    char phone_number[MAX_NUMBER];
}contact;
// Binary search function
/*int binarySearch(contact contacts[], int MAX_CONTACTS, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // If the target is found at the middle
        if (arr[mid] == target)
            return mid;
        
        // If the target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;
        
        // If the target is smaller, ignore the right half
        else
            right = mid - 1;
    }
    
    // If the target is not present in the array
    return -1;
}*/

int main(){
  contact contacts[MAX_CONTACTS];
  strcpy(contacts[0].names,"disha");
  strcpy(contacts[0].phone_number,"8168220353");
  strcpy(contacts[1].names,"palak");
  strcpy(contacts[1].phone_number,"8168226789");
  strcpy(contacts[2].names,"shruti");
  strcpy(contacts[2].phone_number,"8165674353");
  strcpy(contacts[3].names,"isha");
  strcpy(contacts[3].phone_number,"9998220353");
  strcpy(contacts[4].names,"ashima");
  strcpy(contacts[4].phone_number,"8169020353");
  strcpy(contacts[5].names,"john");
  strcpy(contacts[5].phone_number,"8168274251");
  strcpy(contacts[6].names,"zeeman");
  strcpy(contacts[6].phone_number,"81098220353");
  strcpy(contacts[7].names,"shashi");
  strcpy(contacts[7].phone_number,"8168087653");
  
  char decision;
 int n;
  printf("whether you want to see phone contact book(yes/no):");
  scanf("%c",decision);
  if(decision=='y'){
  for(int i=0;i<7;i++){
    printf("Contacts:\n");
    printf("Name: %s, Phone Number: %s\n", contacts[i].names, contacts[i].phone_number);
    printf("\n");
    printf("enter the person you want to search:");
    scanf("%s",contacts[MAX_NAME].names);
}
  }
  
else{
    printf("enter the person you want to search:");
    scanf("%s",contacts[n].names);
}  


// Main function to test the binary search
/*int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 12;
    int index = binarySearch(arr, size, target);
    
    if (index != -1)
        printf("Element %d found at index %d\n", target, index);
    else
        printf("Element %d not found in the array\n", target);
    
    return 0;
}*/

}