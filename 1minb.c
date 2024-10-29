#include<stdio.h>
int main(){
    int arr[6]={3,7,10,3,1,9};
    int max,min,n=6,i;
    if(n%2==0){
    if(arr[0]>arr[1]){
        max=arr[0],min=arr[1];
    }
    else{
        max=arr[1],min=arr[0];
    }
    i=2;
    }
    else{
        min=arr[0],max=arr[1];
        i=1;
    }
    while(i<n-2){
        
    }
    
    return 0;
}