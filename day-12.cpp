 #include <iostream>
using namespace std;

// Function to check Palindrome
bool palindrome(int n)
{
    int temp = n, rev = 0;

    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    return (rev == n);
}

// Function to check Armstrong Number
bool armstrong(int n)
{
    int temp = n, digit, sum = 0;

    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }

    return (sum == n);
}

// Function to print Fibonacci Series
void fibonacci(int n)
{
    int a = 0, b = 1, c;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    cout << endl;
}

// Function to check Perfect Number
bool perfect(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    return (sum == n);
}

int main()
{
    int choice, n;

    cout << "------ MENU ------" << endl;
    cout << "1. Palindrome" << endl;
    cout << "2. Armstrong Number" << endl;
    cout << "3. Fibonacci Series" << endl;
    cout << "4. Perfect Number" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter a number: ";
            cin >> n;

            if (palindrome(n))
                cout << n << " is a Palindrome." << endl;
            else
                cout << n << " is not a Palindrome." << endl;

            break;

        case 2:
            cout << "Enter a number: ";
            cin >> n;

            if (armstrong(n))
                cout << n << " is an Armstrong Number." << endl;
            else
                cout << n << " is not an Armstrong Number." << endl;

            break;

        case 3:
            cout << "Enter number of terms: ";
            cin >> n;
            fibonacci(n);
            break;

        case 4:
            cout << "Enter a number: ";
            cin >> n;

            if (perfect(n))
                cout << n << " is a Perfect Number." << endl;
            else
                cout << n << " is not a Perfect Number." << endl;

            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}