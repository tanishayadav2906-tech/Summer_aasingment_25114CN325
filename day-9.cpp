 #include <iostream>
using namespace std;

// Function to print Reverse Star Pattern
void reverseStar(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print Reverse Number Triangle
void reverseNumberTriangle(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

// Function to print Repeated Character Pattern
void repeatedCharacter(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('A' + i - 1);
        }
        cout << endl;
    }
}

// Function to print Hollow Square Pattern
void hollowSquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int choice, n;

    cout << "------ MENU ------" << endl;
    cout << "1. Reverse Star Pattern" << endl;
    cout << "2. Reverse Number Triangle" << endl;
    cout << "3. Repeated Character Pattern" << endl;
    cout << "4. Hollow Square Pattern" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter number of rows: ";
    cin >> n;

    switch (choice)
    {
        case 1:
            reverseStar(n);
            break;

        case 2:
            reverseNumberTriangle(n);
            break;

        case 3:
            repeatedCharacter(n);
            break;

        case 4:
            hollowSquare(n);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}