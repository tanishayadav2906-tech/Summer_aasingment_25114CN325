 #include <iostream>
using namespace std;

// Function to print Fibonacci series
void fibonacciSeries(int n)
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

// Function to find nth Fibonacci term
void nthFibonacci(int n)
{
    int a = 0, b = 1, c;

    if (n == 1)
    {
        cout << "Nth Fibonacci term = " << a << endl;
        return;
    }

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    cout << "Nth Fibonacci term = " << a << endl;
}

// Function to check Armstrong number
void checkArmstrong(int num)
{
    int temp = num, digit, sum = 0;

    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong Number." << endl;
    else
        cout << num << " is not an Armstrong Number." << endl;
}

// Function to print Armstrong numbers in a range
void armstrongRange(int start, int end)
{
    int num, temp, digit, sum;

    cout << "Armstrong Numbers are: ";

    for (num = start; num <= end; num++)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    cout << endl;
}

int main()
{
    int choice, n, num, start, end;

    cout << "------ MENU ------" << endl;
    cout << "1. Generate Fibonacci Series" << endl;
    cout << "2. Find nth Fibonacci Term" << endl;
    cout << "3. Check Armstrong Number" << endl;
    cout << "4. Print Armstrong Numbers in a Range" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter number of terms: ";
            cin >> n;
            fibonacciSeries(n);
            break;

        case 2:
            cout << "Enter value of n: ";
            cin >> n;
            nthFibonacci(n);
            break;

        case 3:
            cout << "Enter a number: ";
            cin >> num;
            checkArmstrong(num);
            break;

        case 4:
            cout << "Enter starting number: ";
            cin >> start;
            cout << "Enter ending number: ";
            cin >> end;
            armstrongRange(start, end);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}