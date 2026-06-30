 #include <iostream>
using namespace std;

// Function to print Half Pyramid
void halfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print Number Triangle
void numberTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

// Function to print Character Triangle
void characterTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

// Function to print Repeated Number Pattern
void repeatedNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    int choice, n;

    cout << "------ MENU ------" << endl;
    cout << "1. Half Pyramid Pattern" << endl;
    cout << "2. Number Triangle" << endl;
    cout << "3. Character Triangle" << endl;
    cout << "4. Repeated Number Pattern" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter number of rows: ";
    cin >> n;

    switch (choice)
    {
        case 1:
            halfPyramid(n);
            break;

        case 2:
            numberTriangle(n);
            break;

        case 3:
            characterTriangle(n);
            break;

        case 4:
            repeatedNumber(n);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}