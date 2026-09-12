#include <stdio.h>
#include <stdlib.h>

double average(double grades[], int numAssignments);
double highest(double grades[], int numAssignments);
double lowest(double grades[], int numAssignments);

int main(void){

    int numAssignments;
    double grades[100];

    char input[50];

    printf("Enter number of assignments: ");
    fgets(input, sizeof(input), stdin);
    numAssignments = atoi(input);

    for(int i = 0; i < numAssignments; i++){
        printf("Enter grade %d: ", i + 1);

        fgets(input, sizeof(input), stdin);
        grades[i] = atof(input);
    }

    printf("======\n");
    printf("Average: %.2lf\n", average(grades, numAssignments));
    printf("Highest Score: %.2lf\n", highest(grades, numAssignments));
    printf("Lowest Score: %.2lf\n", lowest(grades, numAssignments));
    
    return 0;
}

double average(double grades[], int numAssignments){

    double total = 0;

    for(int i = 0; i < numAssignments; i++){
        total += grades[i]; 
    }

    return total / numAssignments;
}
double highest(double grades[], int numAssignments){

    double highest = grades[0];

    for(int i = 0; i < numAssignments; i++){
        if(grades[i] > highest){
            highest = grades[i];
        }
    }
    return highest;
}

double lowest(double grades[], int numAssignments){

    double lowest = grades[0];

    for(int i = 0; i < numAssignments; i++){
        if(grades[i] < lowest){
            lowest = grades[i];
        }
    }
    return lowest;
}