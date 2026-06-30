 #include <iostream>
using namespace std;

// Function to find sum of two numbers
int sum(int a, int b)
{
    return a + b;
}

// Function to find maximum of two numbers
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

// Function to check Prime Number
bool prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Function to find Factorial
int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int choice;
    int a, b, n;

    cout << "------ MENU ------" << endl;
    cout << "1. Find Sum of Two Numbers" << endl;
    cout << "2. Find Maximum" << endl;
    cout << "3. Check Prime Number" << endl;
    cout << "4. Find Factorial" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Sum = " << sum(a, b) << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Maximum = " << maximum(a, b) << endl;
            break;

        case 3:
            cout << "Enter a number: ";
            cin >> n;

            if (prime(n))
                cout << n << " is a Prime Number." << endl;
            else
                cout << n << " is not a Prime Number." << endl;

            break;

        case 4:
            cout << "Enter a number: ";
            cin >> n;
            cout << "Factorial = " << factorial(n) << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}