  #include <iostream>
using namespace std;

// Function to Multiply Matrices
void multiplyMatrices(int a[][10], int b[][10], int row, int col)
{
    int result[10][10];

    cout << "Multiplication of Matrices:\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < col; k++)
            {
                result[i][j] = result[i][j] + a[i][k] * b[k][j];
            }

            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to Check Symmetric Matrix
void symmetricMatrix(int a[][10], int row, int col)
{
    if (row != col)
    {
        cout << "Matrix is not Symmetric." << endl;
        return;
    }

    int symmetric = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric == 1)
        cout << "Matrix is Symmetric." << endl;
    else
        cout << "Matrix is not Symmetric." << endl;
}

// Function to Find Row-wise Sum
void rowSum(int a[][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }

        cout << "Sum of Row " << i + 1 << " = " << sum << endl;
    }
}

// Function to Find Column-wise Sum
void columnSum(int a[][10], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        int sum = 0;

        for (int i = 0; i < row; i++)
        {
            sum = sum + a[i][j];
        }

        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }
}

int main()
{
    int choice;
    int row, col;
    int a[10][10], b[10][10];

    cout << "------ MENU ------" << endl;
    cout << "1. Multiply Matrices" << endl;
    cout << "2. Check Symmetric Matrix" << endl;
    cout << "3. Find Row-wise Sum" << endl;
    cout << "4. Find Column-wise Sum" << endl;
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

    if (choice == 1)
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
            multiplyMatrices(a, b, row, col);
            break;

        case 2:
            symmetricMatrix(a, row, col);
            break;

        case 3:
            rowSum(a, row, col);
            break;

        case 4:
            columnSum(a, row, col);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}