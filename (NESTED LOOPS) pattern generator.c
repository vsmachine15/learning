#include <stdio.h>
#include <stdlib.h>

int main(void){
  
    int size;
    char input[50];

    printf("Enter size: ");
    fgets(input, sizeof(input), stdin);
    size = atoi(input);

    // square
    printf("\n--- Square ---\n");

    for(int row = 1; row <= size; row++){
        for(int col = 1; col <= size; col++){
            printf("*");
        }
        printf("\n");
    }

    // triangle
    printf("\n--- Triangle ---\n");

        for(int row = 1; row <= size; row++){
            for(int col = 1; col <= row; col++){
                printf("*");
            }
            printf("\n");
        }
    
    // reverse triangle
    printf("\n--- Reverse Triangle ---\n");

        for (int row = size; row >= 1; row--) {
            for (int col = 1; col <= row; col++) {
                printf("*");
            }
            printf("\n");
        }

    // number pattern
    printf("\n--- Number Pattern ---");

        for(int row = 0; row <= size; row++){
            for(int col = 1; col <= row; col++){
                printf("%d ", col);
            }
            printf("\n");
        }

    // multiplication tabel
    printf("\n--- Multiplication Table ---\n");

        for(int row = 1; row <= size; row++){
            for(int col = 1; col <= size; col++){
                printf("%3d ", row * col);
            }
            printf("\n");
        }

    return 0;
}