    #include <stdio.h>
// Function to find the sum of digits
int sumOfDigits(int num) {
    int sum = 0, remainder;
    while (num > 0) {
        remainder = num % 10; // Get the last digit
        sum = sum + remainder; // Add it to sum
        num = num / 10;        // Remove the last digit
    }
    return sum;
}
// Function to reverse a number
int reverseNumber(int num) {
    int reverse = 0, remainder;
    while (num > 0) {
        remainder = num % 10;                  // Get the last digit
        reverse = (reverse * 10) + remainder;  // Append it to the reversed number
        num = num / 10;                        // Remove the last digit
    }
    return reverse;
}
// Function to find the product of digits
int productOfDigits(int num){
    int product = 1, remainder;
    
    // Handle the special case if the initial number itself is 0
    if (num == 0) return 0; 
    
    while (num > 0) {
        remainder = num % 10;     // Get the last digit
        product = product * remainder; // Multiply it to product
        num = num / 10;            // Remove the last digit
    }
    return product;
}   
// Function to check if a number is a palindrome
int isPalindrome(int num) {
    // If the reversed number is equal to the original number, it's a palindrome
    if (num == reverseNumber(num)) {
        return 1; // Returns 1 for True
    } else {
        return 0; // Returns 0 for False
    }
}
int main() {
    int number;

    printf("Enter any positive integer: ");
    scanf("%d", &number);

    // Displaying the results by calling the functions
    printf("\n--- Results for %d ---\n", number);
    printf("Sum of digits: %d\n", sumOfDigits(number));
    printf("Reverse of number: %d\n", reverseNumber(number));
    printf("Product of digits: %d\n", productOfDigits(number));
    
    if (isPalindrome(number)) {
        printf("Is Palindrome? Yes, it is a palindrome.\n");
    } else {
        printf("Is Palindrome? No, it is not a palindrome.\n");
    }
    return 0;
}