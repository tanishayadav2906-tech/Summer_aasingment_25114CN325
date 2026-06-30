 #include <iostream>
using namespace std;

// Function for Menu-Driven Calculator
void calculator()
{
    int choice;
    float a, b;

    cout << "\nCalculator Menu\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice)
    {
        case 1:
            cout << "Result = " << a + b << endl;
            break;

        case 2:
            cout << "Result = " << a - b << endl;
            break;

        case 3:
            cout << "Result = " << a * b << endl;
            break;

        case 4:
            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Division by zero is not possible." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }
}

// Function for Menu-Driven Array Operations
void arrayOperations()
{
    int arr[100], n, choice, sum = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nArray Menu\n";
    cout << "1. Display Array\n";
    cout << "2. Find Sum\n";
    cout << "3. Find Largest Element\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;

        case 2:
            for (int i = 0; i < n; i++)
                sum += arr[i];
            cout << "Sum = " << sum << endl;
            break;

        case 3:
        {
            int largest = arr[0];

            for (int i = 1; i < n; i++)
            {
                if (arr[i] > largest)
                    largest = arr[i];
            }

            cout << "Largest Element = " << largest << endl;
            break;
        }

        default:
            cout << "Invalid Choice!" << endl;
    }
}

// Function for Menu-Driven String Operations
void stringOperations()
{
    char str[100];
    int choice, length = 0;

    cout << "Enter a string: ";
    cin >> str;

    cout << "\nString Menu\n";
    cout << "1. Find Length\n";
    cout << "2. Reverse String\n";
    cout << "3. Convert to Uppercase\n";
    cout << "Enter your choice: ";
    cin >> choice;

    while (str[length] != '\0')
        length++;

    switch (choice)
    {
        case 1:
            cout << "Length = " << length << endl;
            break;

        case 2:
            cout << "Reversed String = ";
            for (int i = length - 1; i >= 0; i--)
                cout << str[i];
            cout << endl;
            break;

        case 3:
            for (int i = 0; i < length; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }

            cout << "Uppercase String = " << str << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }
}

// Function for Inventory Management System
void inventoryManagement()
{
    int itemID, quantity;
    char itemName[50];
    float price;

    cout << "Enter Item ID: ";
    cin >> itemID;

    cout << "Enter Item Name: ";
    cin >> itemName;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price per Item: ";
    cin >> price;

    cout << "\n----- Inventory Details -----\n";
    cout << "Item ID       : " << itemID << endl;
    cout << "Item Name     : " << itemName << endl;
    cout << "Quantity      : " << quantity << endl;
    cout << "Price         : " << price << endl;
    cout << "Total Value   : " << quantity * price << endl;
}

int main()
{
    int choice;

    cout << "------ MAIN MENU ------" << endl;
    cout << "1. Menu-Driven Calculator" << endl;
    cout << "2. Menu-Driven Array Operations" << endl;
    cout << "3. Menu-Driven String Operations" << endl;
    cout << "4. Inventory Management System" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            calculator();
            break;

        case 2:
            arrayOperations();
            break;

        case 3:
            stringOperations();
            break;

        case 4:
            inventoryManagement();
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}