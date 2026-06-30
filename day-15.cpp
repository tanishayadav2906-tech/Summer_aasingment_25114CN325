 #include <iostream>
using namespace std;

// Function to Reverse Array
void reverseArray(int arr[], int n)
{
    int temp;

    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Function to Rotate Array Left
void rotateLeft(int arr[], int n)
{
    int first = arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first;

    cout << "Left Rotated Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Function to Rotate Array Right
void rotateRight(int arr[], int n)
{
    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    cout << "Right Rotated Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Function to Move Zeroes to End
void moveZeroes(int arr[], int n)
{
    int temp[100];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[index] = arr[i];
            index++;
        }
    }

    while (index < n)
    {
        temp[index] = 0;
        index++;
    }

    cout << "Array after moving zeroes: ";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    cout << endl;
}

int main()
{
    int choice, n;
    int arr[100];

    cout << "------ MENU ------" << endl;
    cout << "1. Reverse Array" << endl;
    cout << "2. Rotate Array Left" << endl;
    cout << "3. Rotate Array Right" << endl;
    cout << "4. Move Zeroes to End" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    switch (choice)
    {
        case 1:
            reverseArray(arr, n);
            break;

        case 2:
            rotateLeft(arr, n);
            break;

        case 3:
            rotateRight(arr, n);
            break;

        case 4:
            moveZeroes(arr, n);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}