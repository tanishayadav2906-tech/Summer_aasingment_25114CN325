 #include <iostream>
using namespace std;

// Function to check Perfect Number
void perfectNumber(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }

    if (sum == num)
        cout << num << " is a Perfect Number." << endl;
    else
        cout << num << " is not a Perfect Number." << endl;
}

// Function to check Strong Number
void strongNumber(int num)
{
    int temp = num, digit, fact, sum = 0;

    while (temp > 0)
    {
        digit = temp % 10;
        fact = 1;

        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
        cout << num << " is a Strong Number." << endl;
    else
        cout << num << " is not a Strong Number." << endl;
}

// Function to print Factors
void factors(int num)
{
    cout << "Factors are: ";

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            cout << i << " ";
    }

    cout << endl;
}

// Function to find Largest Prime Factor
void largestPrimeFactor(int num)
{
    int largest = 1;

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            int prime = 1;

            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }

            if (prime == 1)
                largest = i;
        }
    }

    cout << "Largest Prime Factor = " << largest << endl;
}

int main()
{
    int choice, num;

    cout << "------ MENU ------" << endl;
    cout << "1. Check Perfect Number" << endl;
    cout << "2. Check Strong Number" << endl;
    cout << "3. Print Factors of a Number" << endl;
    cout << "4. Find Largest Prime Factor" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter a number: ";
            cin >> num;
            perfectNumber(num);
            break;

        case 2:
            cout << "Enter a number: ";
            cin >> num;
            strongNumber(num);
            break;

        case 3:
            cout << "Enter a number: ";
            cin >> num;
            factors(num);
            break;

        case 4:
            cout << "Enter a number: ";
            cin >> num;
            largestPrimeFactor(num);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}