#include <stdio.h>


int main() {
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    printf("Introduce los elementos de la primera matriz: \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    printf("Introduce los elementos de la segunda matriz: \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    // Suma las dos matrices y guarda el resultado en C
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("La suma de las dos matrices es: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
