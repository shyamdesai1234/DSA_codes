#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, P, Q, i;
    FILE *fp;

    // Get input from user
    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &N);
    printf("Enter the lower range limit: ");
    scanf("%d", &P);
    printf("Enter the upper range limit: ");
    scanf("%d", &Q);

    // Generate N random numbers between P and Q
    srand(time(NULL));
    int random_numbers[N];
    for (i = 0; i < N; i++) {
        random_numbers[i] = rand() % (Q - P + 1) + P;
    }

    // Write the numbers to a file
    fp = fopen("Input.txt", "w");
    for (i = 0; i < N; i++) {
        fprintf(fp, "%d\n", random_numbers[i]);
    }
    fclose(fp);

    printf("%d random numbers between %d and %d written to Input.txt.\n", N, P, Q);

    return 0;
}
