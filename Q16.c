#include<stdio.h>
int main(){
    int n;
    
    printf("enter no of scores:");
    scanf("%d",&n);
    int arr[n];
   

    printf("enter scores:)");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first=-1,second=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];

        }
        else if(arr[i]<first && arr[i]>second){
            second=arr[i];
        }
    }
    printf("result=%d",second);
    return 0;
        
    }