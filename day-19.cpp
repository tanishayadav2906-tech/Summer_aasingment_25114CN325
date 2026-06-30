 #include <iostream>
using namespace std;

// Function to Add Matrices
void addMatrices(int a[][10], int b[][10], int row, int col)
{
    int sum[10][10];

    cout << "Sum of Matrices:\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to Subtract Matrices
void subtractMatrices(int a[][10], int b[][10], int row, int col)
{
    int sub[10][10];

    cout << "Subtraction of Matrices:\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to Transpose Matrix
void transposeMatrix(int a[][10], int row, int col)
{
    cout << "Transpose Matrix:\n";

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

// Function to Find Diagonal Sum
void diagonalSum(int a[][10], int row, int col)
{
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        sum = sum + a[i][i];
    }

    cout << "Diagonal Sum = " << sum << endl;
}

int main()
{
    int choice;
    int row, col;
    int a[10][10], b[10][10];

    cout << "------ MENU ------" << endl;
    cout << "1. Add Matrices" << endl;
    cout << "2. Subtract Matrices" << endl;
    cout << "3. Transpose Matrix" << endl;
    cout << "4. Find Diagonal Sum" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    cout << "Enter first matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    if (choice == 1 || choice == 2)
    {
        cout << "Enter second matrix:\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> b[i][j];
            }
        }
    }

    switch (choice)
    {
        case 1:
            addMatrices(a, b, row, col);
            break;

        case 2:
            subtractMatrices(a, b, row, col);
            break;

        case 3:
            transposeMatrix(a, row, col);
            break;

        case 4:
            diagonalSum(a, row, col);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}