  #include <iostream>
using namespace std;

// Recursive Factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Recursive Fibonacci
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive Sum of Digits
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

// Recursive Reverse Number
int reverseNum(int n, int rev)
{
    if (n == 0)
        return rev;
    else
        return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main()
{
    int choice, n, rev = 0;

    cout << "------ MENU ------" << endl;
    cout << "1. Recursive Factorial" << endl;
    cout << "2. Recursive Fibonacci" << endl;
    cout << "3. Recursive Sum of Digits" << endl;
    cout << "4. Recursive Reverse Number" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter a number: ";
            cin >> n;
            cout << "Factorial = " << factorial(n) << endl;
            break;

        case 2:
            cout << "Enter the value of n: ";
            cin >> n;
            cout << "Fibonacci Term = " << fibonacci(n) << endl;
            break;

        case 3:
            cout << "Enter a number: ";
            cin >> n;
            cout << "Sum of Digits = " << sumOfDigits(n) << endl;
            break;

        case 4:
            cout << "Enter a number: ";
            cin >> n;
            cout << "Reverse = " << reverseNum(n, rev) << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}