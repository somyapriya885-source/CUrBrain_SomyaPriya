#include<stdio.h>
int main(){
    int base,power;
    int MOD;
    //int result=1;
    printf("enter base:");
    scanf("%d", &base);
    printf("enter power:");
    scanf("%d", &power);
    printf("enter MOD:");
    scanf("%d",&MOD);
    int result =1%MOD;
    for(int i=0;i<power;i++) {
        result=(result*base)%MOD;
    }
    printf("%d",result);
    return 0;
}