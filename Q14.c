#include<stdio.h>
int main(){
    int n;
    int threshold;
    //int arr2[n];
    //int result=0;
    
    printf("enter no of sales  you want:");
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    int result=0;
    printf("enter sales:");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("enter threshold:");
    scanf("%d",&threshold);
    for(int i=0;i<n;i++){
        if(arr[i]>=threshold){
            arr2[result]=arr[i];
            result++;
        }
    }
    printf("[");
    for(int i=0;i<result;i++){
        printf("%d",arr2[i]);
        if(i<result-1){
            printf(" , ");
        }
    }
    printf("]");
    return 0;
}