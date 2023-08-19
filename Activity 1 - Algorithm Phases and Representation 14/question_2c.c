// (c) Calculate a 23% discount on the price of a product.


#include <stdio.h>
#include <stdlib.h>

int main(){
    
    printf("Type the product price: "); 
    
    // Declare a variable to hold the input number
    float productPrice; 
    
    // Loop to ensure valid input for the product price (must be a positive number)
    while(scanf("%f", &productPrice) !=1 || productPrice<=0){ 
        printf("Invalid input! \n"); 
        printf("please insert a valid number: "); 
        
        // Clear the input buffer
        while(getchar() !='\n'); 
    }; 

    // Declare the discount percentage
    float discount = 0.23; 
    
    // Calculate the final price after applying the discount
    float finalPrice = productPrice * (1 - discount); 
    
    // Display the final price to the user
    printf("The final price is: $%.2f", finalPrice ); 
    return 0; 
}

