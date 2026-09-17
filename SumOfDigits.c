#include <stdio.h>

int main(){

    long long int n;
    int m, total = 0;
    printf("Enter a Number..: ");
    scanf("%lld", &n);

    while (n){

        m = n % 10;
        total += m;
        n /= 10;

    }

    printf("%d ", total);

    return 0;

}