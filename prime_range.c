#include <stdio.h>

int main() {
    int startingPoint, endingPoint, i, j, prime;
    printf("Enter the starting number and the ending number from the range: ");
    scanf("%d %d", &startingPoint, &endingPoint);
    if (startingPoint >= endingPoint) {
        printf("The starting point must be smaller than the ending point\n");
        return 0;
    } else {
        printf("The prime numbers in range %d ~ %d are: ", startingPoint, endingPoint);
        for (i = startingPoint; i <= endingPoint; i++) {
            prime = 0;
            for (j = 1; j <= i; j++) {
                if (i % j == 0) prime++;
            }
            if (prime == 2) printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}