#include <stdio.h>
#include <stdlib.h>

// global variable
int passingGrade = 70;

double calculateAverage(int score1, int score2, int score3){
    double average = (score1 + score2 + score3) / 3.0;
    return average;
}
int checkGrade(double average){
    int passed;

    if(average >= passingGrade){
        passed = 1;
    }
    else{
        passed = 0;
    }
    return passed;
}

int main(void){

    char input[100];

    // local variable to main
    int score1;
    int score2;
    int score3;
    double average;

    printf("Enter score 1: ");
    fgets(input, sizeof(input), stdin);
    score1 = atoi(input);

    printf("Enter score 2: ");
    fgets(input, sizeof(input), stdin);
    score2 = atoi(input);

    printf("Etner score 3: ");
    fgets(input, sizeof(input), stdin);
    score3 = atoi(input);

    // call calculateAverage
    average = calculateAverage(score1, score2, score3);
    printf("\nAverage: %.2lf%%\n", average);

   if(checkGrade(average)){
        printf("You passed!\n");
   }
   else{
        printf("You failed.\n");
   }

    return 0;
}