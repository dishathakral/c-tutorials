//reverse the number in array;
#include<stdio.h>

int main(){
    int arr[]={34,55,54,32,67,89,90,34,21};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("original array is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("reverse array is:");
    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //to find duplicate lements and remove it
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<size-1;k++){
                arr[k]=arr[k+1];
                }
                size--;
            j--;
            }
            
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}