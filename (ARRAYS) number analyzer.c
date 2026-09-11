#include <stdio.h>

int main(void){

    int nums[5] = {0};
    int numSize = sizeof(nums) / sizeof(nums[0]);

    // user input
    for(int i = 0; i < numSize; i++){
        printf("Enter a number: ");
        scanf("%d", &nums[i]);
    }

    // display array
    for(int i = 0; i < numSize; i++){
        printf("%d\n", nums[i]);
    }

    // find largest number in array
    int largestNum = nums[0];

    for(int i = 1; i < numSize; i++){
        if(nums[i] > largestNum){
            largestNum = nums[i];
        }
    }

    // find smallest number in array
    int smallestNum = nums[0];

    for(int i = 1; i < numSize; i++){
        if(nums[i] < smallestNum){
            smallestNum = nums[i];
        }
    }

    // calculate sum
    int sum;

    for(int i = 0; i <= numSize; i++){
        sum += nums[i];
    }

    double average = (double)sum / 5;

    printf("\n\nLargest: %d", largestNum);
    printf("\nSmallest: %d", smallestNum);
    printf("\nAverage: %.2f\n", average);

    return 0;
}

