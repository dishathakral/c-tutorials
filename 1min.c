//find min and max from array using minimum number of comparisons
#include<stdio.h>
int main(){
    int arr[]={10,1,10,3,5,8,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0],min=arr[0],secondmax=arr[0];
    int i,j,k;
    //remove the duplicate elements from array
    for( i=0;i<size;i++){
        for( j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<size-1;k++){
                    arr[k]=arr[k+1];}
                    size--;
                    j--;
                
                
            }
        }
    }
    printf("new array without duplicate elements:");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
            
        }
        else{
            continue;
        }
    }
    printf("min is %d and max is %d\n",min,max);
    for(i=0;i<size;i++){
        if(arr[i]==max){
            printf("index of max number is %d ",i);
        }
        else{
            continue;
        }
    }
    
    return 0;
}