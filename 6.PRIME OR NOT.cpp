#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("It is not a prime number\n");
        return 0;
    }

    int isPrime = 1; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = 0; 
            break;
        }
    }

    if (isPrime) {
        printf("It is a prime number\n");
    } else {
        printf("It is not a prime number\n");
    }

    return 0;
}
