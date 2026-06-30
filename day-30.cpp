 #include <iostream>
using namespace std;

// Function for Student Record System
void studentRecord()
{
    int n, roll[10];
    char name[10][30];
    float marks[10];

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> roll[i];

        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Roll No : " << roll[i] << endl;
        cout << "Name    : " << name[i] << endl;
        cout << "Marks   : " << marks[i] << endl;
        cout << endl;
    }
}

// Function for Mini Library System
void librarySystem()
{
    int n, bookID[10];
    char bookName[10][30];

    cout << "Enter number of books: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;

        cout << "Enter Book ID: ";
        cin >> bookID[i];

        cout << "Enter Book Name: ";
        cin >> bookName[i];
    }

    cout << "\n----- Library Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Book ID   : " << bookID[i] << endl;
        cout << "Book Name : " << bookName[i] << endl;
        cout << endl;
    }
}

// Function for Mini Employee Management System
void employeeSystem()
{
    int n, empID[10];
    char empName[10][30];
    float salary[10];

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> empID[i];

        cout << "Enter Employee Name: ";
        cin >> empName[i];

        cout << "Enter Salary: ";
        cin >> salary[i];
    }

    cout << "\n----- Employee Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Employee ID : " << empID[i] << endl;
        cout << "Name        : " << empName[i] << endl;
        cout << "Salary      : " << salary[i] << endl;
        cout << endl;
    }
}

// Function for Complete Mini Project (Inventory System)
void miniProject()
{
    int n, quantity[10];
    char itemName[10][30];
    float price[10];

    cout << "Enter number of items: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nItem " << i + 1 << endl;

        cout << "Enter Item Name: ";
        cin >> itemName[i];

        cout << "Enter Quantity: ";
        cin >> quantity[i];

        cout << "Enter Price: ";
        cin >> price[i];
    }

    cout << "\n----- Inventory Report -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Item Name : " << itemName[i] << endl;
        cout << "Quantity  : " << quantity[i] << endl;
        cout << "Price     : " << price[i] << endl;
        cout << "Total     : " << quantity[i] * price[i] << endl;
        cout << endl;
    }
}

int main()
{
    int choice;

    cout << "------ MENU ------" << endl;
    cout << "1. Student Record System" << endl;
    cout << "2. Mini Library System" << endl;
    cout << "3. Mini Employee Management System" << endl;
    cout << "4. Complete Mini Project (Inventory)" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            studentRecord();
            break;

        case 2:
            librarySystem();
            break;

        case 3:
            employeeSystem();
            break;

        case 4:
            miniProject();
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}