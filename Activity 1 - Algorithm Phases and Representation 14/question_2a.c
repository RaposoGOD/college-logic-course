// (a) Calculate and display the weighted average of two grades.


#include <stdio.h>
#include <stdlib.h>

int main(){ //Start Code

    // Input and Validation for Score 1
    printf("Enter the first grade: "); // Prompt for the first grade
    float score1, score2; 
    while(scanf("%f", &score1)!=1 || score1<0 || score1>10){ // Input validation for score1
            printf("Invalid input, please enter a valid number! \n"); //Print error
                while(getchar() != '\n'); //Clean buffer
    }

    // Input and Validation for Score 2
    printf("Enter the second grade: "); // Prompt for the second grade
        while(scanf("%f", &score2)!=1 || score2<0 || score2>10){ // Input validation for score2
            printf("Invalid input, please enter a valid number! \n"); // Print error message
                while(getchar() != '\n'); // Clear input buffer
    }

    // Calculate and Display Average
    float average = (score1+score2)/2; // Calculate the average
        printf("Your average is: %.1f\n", average); // Display the calculated average

    // Determine Result based on Average
    if(average>=9.5){ // "if" statement to determine different results based on the average
            printf("Congratulations, you were approved and were accepted into college!"); 
    }else if(average >=7){
            printf("Congratulations, you were approved.");
    }else{
            printf("You did not pass");
    }    
    
    return 0; //End Code
}



