#include<stdio.h>
int main(){
    int n;
   // long long arr[n];
    long long MOD=1000000007;
    long long sum=0;
    long long num;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements:");
    for(int i=0;i<n;i++){
        scanf("%lld",&num);`
    //}
    //for(int i=0;i<n;i++){
        sum=(sum+num)%MOD;

    }
printf("sum is %lld",sum);
return 0;
}