     #include <stdio.h>

// Function to calculate sum of first N natural numbers
void sumNatural(int n) {
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);
}

// Function to print multiplication table
void multiplicationTable(int n) {
    printf("\nMultiplication Table of %d:\n", n);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// Function to find factorial
void factorial(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("\nFactorial of %d = %d\n", n, fact);
}

// Function to count digits
void countDigits(int n) {
    int count = 0;
    int temp = n;

    while(temp != 0) {
        temp /= 10;
        count++;
    }

    printf("\nNumber of digits = %d\n", count);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    sumNatural(n);
    multiplicationTable(n);
    factorial(n);
    countDigits(n);

    return 0;
}