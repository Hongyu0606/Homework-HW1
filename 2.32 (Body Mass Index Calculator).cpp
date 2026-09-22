#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\nYour BMI is: %f\n\n", bmi);
    printf("BMI VALUES\n");
    printf("Underweight:\tless than 18.5\n");
    printf("Normal:\t\tbetween 18.5 and 24.9\n");
    printf("Overweight:\tbetween 25 and 29.9\n");
    printf("Obese:\t\t30 or greater\n");

    return 0;
}