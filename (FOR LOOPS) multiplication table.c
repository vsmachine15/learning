#include <stdio.h>

int main(void){

    int number;
    int start;
    int end;
    char input[100];

    printf("Enter a number: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &number);

    printf("Start at: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &start);

    printf("End at: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &end);

    for(int i = start; i <= end; i++){
       printf("%d x %d = %d\n", number, i, number * i); 
    }

    return 0;
}