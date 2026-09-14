#include <stdio.h>
#include <math.h>

int main(){

    long long i, n;
    int isprime = 1;

    printf("Enter a Number..: ");
    scanf("%lld", &n);

    if (n < 2){
        printf("Neither a Prime, nor a Composite..");
        return 0;
    }

    for ( i = 2; i <= sqrt(n); i++){
        if ( n % i == 0){
            isprime = 0;
            break;
        }
    }
    if(isprime == 1){
        printf("Is Prime..");
    }
    else{
        printf("Not Prime..");
    }
    return 0;
}
