#include <stdio.h>

int main(){

    int n;
    printf("How many numbers? ");
    scanf("%d", &n);

    int con[n];
    printf("Enter vales for an Array..: ");
    for (int i = 0; i < n; i++ ){
        scanf("%d", &con[i]);
    }

    int start = 0, end = n -1, temp;
    while (start < end){

        temp = con[start];
        con[start] = con[end];
        con[end] = temp;
        start++;
        end--;

    }

    for ( int j = 0; j < n; j++ ){
        printf("%d ", con[j]);
    }

    return 0;
}