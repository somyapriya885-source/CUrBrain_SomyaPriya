#include<stdio.h>
#include<stdlib.h>
int main(){
    int n ;
    int smallest;
    printf("nter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
    int smallest = arr[0];
    if(abs(arr[i])<abs(smallest)){
        smallest=arr[i];
    }
}
printf("result =,%d",smallest);
return 0;
}