 #include <iostream>
using namespace std;

// Function to print Star Pyramid
void starPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";

        cout << endl;
    }
}

// Function to print Reverse Star Pyramid
void reversePyramid(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";

        cout << endl;
    }
}

// Function to print Number Pyramid
void numberPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << j;

        for (int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }
}

// Function to print Character Pyramid
void characterPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (char ch = 'A'; ch < 'A' + i; ch++)
            cout << ch;

        for (char ch = 'A' + i - 2; ch >= 'A'; ch--)
            cout << ch;

        cout << endl;
    }
}

int main()
{
    int choice, n;

    cout << "------ MENU ------" << endl;
    cout << "1. Star Pyramid" << endl;
    cout << "2. Reverse Star Pyramid" << endl;
    cout << "3. Number Pyramid" << endl;
    cout << "4. Character Pyramid" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter number of rows: ";
    cin >> n;

    switch (choice)
    {
        case 1:
            starPyramid(n);
            break;

        case 2:
            reversePyramid(n);
            break;

        case 3:
            numberPyramid(n);
            break;

        case 4:
            characterPyramid(n);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}