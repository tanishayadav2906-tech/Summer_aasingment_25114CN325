 #include <iostream>
using namespace std;

// Function to find Missing Number
void missingNumber(int arr[], int n)
{
    int sum = 0;
    int total = (n + 1) * (n + 2) / 2;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Missing Number = " << total - sum << endl;
}

// Function to find Maximum Frequency Element
void maximumFrequency(int arr[], int n)
{
    int maxCount = 0;
    int element;

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            element = arr[i];
        }
    }

    cout << "Maximum Frequency Element = " << element << endl;
    cout << "Frequency = " << maxCount << endl;
}

// Function to find Pair with Given Sum
void pairSum(int arr[], int n, int sum)
{
    int found = 0;

    cout << "Pairs are: ";

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "(" << arr[i] << "," << arr[j] << ") ";
                found = 1;
            }
        }
    }

    if (found == 0)
        cout << "No Pair Found";

    cout << endl;
}

// Function to Remove Duplicates
void removeDuplicates(int arr[], int n)
{
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0)
            cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int choice, n, sum;
    int arr[100];

    cout << "------ MENU ------" << endl;
    cout << "1. Find Missing Number" << endl;
    cout << "2. Find Maximum Frequency Element" << endl;
    cout << "3. Find Pair with Given Sum" << endl;
    cout << "4. Remove Duplicates from Array" << endl;
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
            missingNumber(arr, n);
            break;

        case 2:
            maximumFrequency(arr, n);
            break;

        case 3:
            cout << "Enter required sum: ";
            cin >> sum;
            pairSum(arr, n, sum);
            break;

        case 4:
            removeDuplicates(arr, n);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}