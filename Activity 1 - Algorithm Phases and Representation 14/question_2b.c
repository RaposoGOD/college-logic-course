// (b) Adjust an initial salary by 15%.


#include <stdlib.h>
#include <stdio.h>

int main(){ // Start Code
    

    printf("Enter your minimum wage: "); 
    float salary; while(scanf("%f", &salary) !=1 || salary<=0 ){ // Input and validation for the salary
        printf("Invalid input! \n"); // Display error message if not a valid number or <= 0
        printf("please insert a valid wage: "); // Prompt for a valid number after the error message
        while(getchar() !='\n'); // Clear the input buffer
    };
    float increase = salary * 0.15; // Calculate the increase (15% of the salary)
    float adjustedSalary = salary + increase; // Calculate the adjusted salary by adding the increase
    printf("The adjusted salary is: $%.2f", adjustedSalary); // Display the adjusted salary
    
    return 0; // End of the code
}
