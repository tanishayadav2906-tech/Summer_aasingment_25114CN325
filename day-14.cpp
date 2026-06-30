 #include <iostream>
using namespace std;

// Function for Linear Search
void linearSearch(int arr[], int n, int key)
{
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "Element not found." << endl;
}

// Function to find Frequency of an Element
void frequency(int arr[], int n, int key)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            count++;
    }

    cout << "Frequency = " << count << endl;
}

// Function to find Second Largest Element
void secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int second = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    cout << "Second Largest Element = " << second << endl;
}

// Function to find Duplicate Elements
void duplicates(int arr[], int n)
{
    cout << "Duplicate Elements are: ";

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > 0)
        {
            int printed = 0;

            for (int k = 0; k < i; k++)
            {
                if (arr[k] == arr[i])
                {
                    printed = 1;
                    break;
                }
            }

            if (printed == 0)
            {
                cout << arr[i] << " ";
                found = 1;
            }
        }
    }

    if (found == 0)
        cout << "No Duplicates";

    cout << endl;
}

int main()
{
    int choice, n, key;
    int arr[100];

    cout << "------ MENU ------" << endl;
    cout << "1. Linear Search" << endl;
    cout << "2. Frequency of an Element" << endl;
    cout << "3. Second Largest Element" << endl;
    cout << "4. Find Duplicates in Array" << endl;
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
            cout << "Enter element to search: ";
            cin >> key;
            linearSearch(arr, n, key);
            break;

        case 2:
            cout << "Enter element to find frequency: ";
            cin >> key;
            frequency(arr, n, key);
            break;

        case 3:
            secondLargest(arr, n);
            break;

        case 4:
            duplicates(arr, n);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}