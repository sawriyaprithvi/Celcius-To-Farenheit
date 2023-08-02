#include <stdio.h>

int celsius_to_fahrenheit(int celsius) {
    int fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

int main() {
    int celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    if (scanf("%d", &celsius) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    fahrenheit = celsius_to_fahrenheit(celsius);
    printf("The temperature in Fahrenheit is %d\n", fahrenheit);

    return 0;
}
