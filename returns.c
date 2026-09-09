#include <stdio.h>

int square(int num){
    int result = num * num;

    return result;
}

int main(void){

    // return = returns a value back to where you call a function

    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}

#include <stdio.h>

double cube(double num){
    double result = num * num * num;

    return result;
}

int main(void){

    double x = cube(2);
    double y = cube(3);
    double z = cube(4);

    printf("%.2lf\n", x);
    printf("%.2lf\n", y);
    printf("%.2lf\n", z);

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age){

    if(age >= 18){
        return true;
    }
    else{
        return false;
    }
}

int main(void){

    int age = 21;

    if(ageCheck(age)){
        printf("You may sign up.\n");
    }
    else{
        printf("You must be 18+ to sign up.\n");
    }


    return 0;
}

#include <stdio.h>

int getmax(int x, int y){

    if(x >= y){
        return x;
    }
    else{
        return y;
    }
}

int main(void){

    int max = getmax(91, 72);

    printf("%d", max);

    return 0;
}