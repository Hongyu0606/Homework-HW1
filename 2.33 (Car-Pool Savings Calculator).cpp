#include <stdio.h>

int main() {
    float miles, costPerGallon, milesPerGallon, parkingFees, tolls, totalCost;

    printf("Enter total miles driven per day: ");
    scanf("%f", &miles);
    
    printf("Enter cost per gallon of gasoline: ");
    scanf("%f", &costPerGallon);
    
    printf("Enter average miles per gallon: ");
    scanf("%f", &milesPerGallon);
    
    printf("Enter parking fees per day: ");
    scanf("%f", &parkingFees);
    
    printf("Enter tolls per day: ");
    scanf("%f", &tolls);

    totalCost = (miles / milesPerGallon) * costPerGallon + parkingFees + tolls;

    printf("\nYour daily driving cost is: %.2f\n", totalCost);

    return 0;
}