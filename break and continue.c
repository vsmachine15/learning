#include <stdio.h>

int main(void){

    for(int i =1; i <= 20; i++){

        // skip multiples of 3
        if(i % 3 == 0){
            continue;
        }

        // stop at 17
        if(i == 17){
            break;
        }

        printf("%d\n", i);

    }

    return 0;
}