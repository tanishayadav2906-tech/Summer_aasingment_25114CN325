 #include <iostream>
using namespace std;

// Function to Merge Arrays
void mergeArrays(int arr1[], int n1, int arr2[], int n2)
{
    cout << "Merged Array: ";

    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " ";

    for (int i = 0; i < n2; i++)
        cout << arr2[i] << " ";

    cout << endl;
}

// Function to find Union of Arrays
void unionArray(int arr1[], int n1, int arr2[], int n2)
{
    cout << "Union of Arrays: ";

    // Print first array
    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " ";

    // Print only unique elements from second array
    for (int i = 0; i < n2; i++)
    {
        int found = 0;

        for (int j = 0; j < n1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
            cout << arr2[i] << " ";
    }

    cout << endl;
}

// Function to find Intersection of Arrays
void intersectionArray(int arr1[], int n1, int arr2[], int n2)
{
    cout << "Intersection: ";

    int found = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                found = 1;
                break;
            }
        }
    }

    if (found == 0)
        cout << "No Common Elements";

    cout << endl;
}

// Function to find Common Elements
void commonElements(int arr1[], int n1, int arr2[], int n2)
{
    cout << "Common Elements: ";

    int found = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                found = 1;
                break;
            }
        }
    }

    if (found == 0)
        cout << "No Common Elements";

    cout << endl;
}

int main()
{
    int choice;
    int n1, n2;
    int arr1[100], arr2[100];

    cout << "------ MENU ------" << endl;
    cout << "1. Merge Arrays" << endl;
    cout << "2. Union of Arrays" << endl;
    cout << "3. Intersection of Arrays" << endl;
    cout << "4. Find Common Elements" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter first array elements: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter second array elements: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    switch (choice)
    {
        case 1:
            mergeArrays(arr1, n1, arr2, n2);
            break;

        case 2:
            unionArray(arr1, n1, arr2, n2);
            break;

        case 3:
            intersectionArray(arr1, n1, arr2, n2);
            break;

        case 4:
            commonElements(arr1, n1, arr2, n2);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}