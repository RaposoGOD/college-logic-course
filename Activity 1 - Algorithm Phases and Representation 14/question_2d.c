// (d) Check if a specific number provided by the user is positive or negative and print the corresponding result.


#include <stdlib.h>
#include <stdio.h>

int main(){ // Start Code

// Create a infinite loop
while(1){
    printf("Type a number: ");
    
    // Declare a variable to hold the input numbe34                                                                                                                                                                                                                                        
    float number; 
    
    // Loop to handle input validation
    while(scanf("%f", &number) !=1){
        printf("Invalid number! \n");
        printf("Please enter a number: ");
        
        // Clear input buffer until a new line character is encountered
        while(getchar() !='\n');
    };
    
    // Check if the entered number is negative, positive, or zero
    if(number < 0){
        printf("The number %.1f is negative! \n", number);
    } else if (number > 0){
         printf("The number %.1f is positive! \n", number);
    } else {
        printf("The number %.1f is zero! \n", number);
    };
}
    return 0; // End Code
}
