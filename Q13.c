
#include<stdio.h>

int main() {
    int n;
    int sum = 0;
    int k;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if(k < 0) {
        k = -k;
    }

    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];

        if(sum % k == 0) {
            found = 1;
            break;
        }
    }

    if(found == 1) {
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}
