#include <stdio.h>

int main() {
    int firstArr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int secondArr[3][3] = {
        {6, 3, 9},
        {2, 4, 7},
        {1, 5, 8}
    };
    int sum[3][3];


    for(int i = 0; i < 3; i++) {
        for(int j = 0; j< 3; j++) {
            sum[i][j] = firstArr[i][j] + secondArr[i][j];

        }
    }

    printf("Sum of the two matrices: \n");
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d \t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}