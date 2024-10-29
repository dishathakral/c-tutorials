#include<stdio.h>
int main(){
    int arr[]={10,1,10,3,5,8,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                arr[j]=0;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            for(int j=i;j<size-1;j++){
                arr[j]=arr[j+1];
                
            }
           i--;
        }
        
        else{
            continue;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<size-count;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}


    