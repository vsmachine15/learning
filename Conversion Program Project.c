#include <stdio.h>
#include <stdlib.h>

void showMenu(void);

double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double kilometersToMiles(double kilometers);
double milesToKilometers(double miles);
double poundsToKilograms(double pounds);
double kilogramsToPounds(double kilograms);

int main(void){

    char input[20];
    int choice; 
    double value;
    double result;

    while(1){

        showMenu();

        printf("Enter your choice: ");
        fgets(input, sizeof(input), stdin);
        choice = atoi(input);

        if(choice == 7){
            printf("Goodbye!\n");
            break;
        }

        switch(choice){
            
            case 1: 
                printf("Enter Temperature in Celsius: ");
                fgets(input, sizeof(input), stdin);
                value = atof(input);
                result = celsiusToFahrenheit(value);

                printf("%.2f Celsius = %.2f Fahrenheit.\n",value, result);
                break;
                
            case 2:
                printf("Enter Temperature in Fahrenheit: ");
                fgets(input, sizeof(input), stdin);
                value = atof(input);
                result = fahrenheitToCelsius(value);

                printf("%.2f Fahrenheit = %.2f Celsius.\n", value, result);
                break;

            case 3:
                printf("Enter Distance in Kilometers: ");
                fgets(input, sizeof(input), stdin);
                value = atof(input);
                result = kilometersToMiles(value);

                printf("%.2f Kilometers is = %.2f Miles.\n", value, result);
                break;

            case 4:
                printf("Enter Distance in Miles: ");
                fgets(input, sizeof(input), stdin);
                value = atof(input);
                result = milesToKilometers(value);

                printf("%.2f Miles is = %.2f Kilometers.\n", value, result);
                break;

            case 5:
                printf("Enter weight in pounds: ");
                fgets(input, sizeof(input), stdin);
                value = atof(input);
                result = poundsToKilograms(value);

                printf("%.2f pounds = %.2f kilograms\n", value, result);
                break;

            case 6: 
                printf("Enter weight in kilograms: ");
                fgets(input, sizeof(input), stdin);
                value = atof(input);
                result = kilogramsToPounds(value);

             printf("%.2f kilograms = %.2f pounds\n", value, result);
             break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    }

    return 0;
}

void showMenu(void){
    printf("\n===== Unit Converter =====\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Kilometers to Miles\n");
    printf("4. Miles to Kilometers\n");
    printf("5. Pounds to Kilograms\n");
    printf("6. Kilograms to Pounds\n");
    printf("7. Exit\n");
}

// function conversions

double celsiusToFahrenheit(double celsius){
    return (celsius * 9.0 / 5.0) + 32.0;
}
double fahrenheitToCelsius(double fahrenheit){
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
double kilometersToMiles(double kilometers){
    return kilometers * 1.60934;
}
double milesToKilometers(double miles){
    return miles * 1.60934;
}
double poundsToKilograms(double pounds){
    return pounds * 0.453592;
}
double kilogramsToPounds(double kilograms){
    return kilograms / 0.453592;
}