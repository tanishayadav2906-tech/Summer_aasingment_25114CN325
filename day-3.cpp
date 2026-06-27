   #include <iostream>
using namespace std;

// Function to check prime number
void checkPrime()
{
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
    {
        cout << n << " is not a prime number.";
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
}

// Function to print prime numbers in a range
void primeRange()
{
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers are: ";

    for (int n = start; n <= end; n++)
    {
        if (n <= 1)
            continue;

        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                count++;
        }

        if (count == 2)
            cout << n << " ";
    }
}

// Function to find GCD
void findGCD()
{
    int a, b, gcd;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    cout << "GCD = " << gcd;
}

// Function to find LCM
void findLCM()
{
    int a, b, max;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    max = (a > b) ? a : b;

    while (true)
    {
        if (max % a == 0 && max % b == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        max++;
    }
}

int main()
{
    int choice;

    cout << "------ DAY 3 PROGRAMS ------\n";
    cout << "1. Check Prime Number\n";
    cout << "2. Print Prime Numbers in a Range\n";
    cout << "3. Find GCD\n";
    cout << "4. Find LCM\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        checkPrime();
        break;

    case 2:
        primeRange();
        break;

    case 3:
        findGCD();
        break;

    case 4:
        findLCM();
        break;

    default:
        cout << "Invalid choice!";
    }

    return 0;
}