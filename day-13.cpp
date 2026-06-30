 #include <iostream>
using namespace std;

// Function to input and display array
void inputDisplay(int arr[], int n)
{
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Function to find sum and average
void sumAverage(int arr[], int n)
{
    int sum = 0;
    float average;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
}

// Function to find largest and smallest element
void largestSmallest(int arr[], int n)
{
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;
}

// Function to count even and odd elements
void evenOdd(int arr[], int n)
{
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even Elements = " << even << endl;
    cout << "Odd Elements = " << odd << endl;
}

int main()
{
    int choice, n;
    int arr[100];

    cout << "------ MENU ------" << endl;
    cout << "1. Input and Display Array" << endl;
    cout << "2. Find Sum and Average" << endl;
    cout << "3. Find Largest and Smallest Element" << endl;
    cout << "4. Count Even and Odd Elements" << endl;
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
            cout << "Array elements are: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 2:
            sumAverage(arr, n);
            break;

        case 3:
            largestSmallest(arr, n);
            break;

        case 4:
            evenOdd(arr, n);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}