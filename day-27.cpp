 #include <iostream>
using namespace std;

// Function for Student Record Management
void studentRecord()
{
    int roll;
    char name[50];
    float marks;

    cout << "Enter Student Roll Number: ";
    cin >> roll;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Student Marks: ";
    cin >> marks;

    cout << "\n----- Student Record -----\n";
    cout << "Roll Number : " << roll << endl;
    cout << "Name        : " << name << endl;
    cout << "Marks       : " << marks << endl;
}

// Function for Employee Management
void employeeRecord()
{
    int id;
    char name[50];
    float salary;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Employee Salary: ";
    cin >> salary;

    cout << "\n----- Employee Record -----\n";
    cout << "Employee ID : " << id << endl;
    cout << "Name        : " << name << endl;
    cout << "Salary      : " << salary << endl;
}

// Function for Salary Management
void salaryManagement()
{
    float basic, hra, da, total;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;
    total = basic + hra + da;

    cout << "\nBasic Salary = " << basic << endl;
    cout << "HRA = " << hra << endl;
    cout << "DA = " << da << endl;
    cout << "Total Salary = " << total << endl;
}

// Function for Marksheet Generation
void marksheet()
{
    char name[50];
    float m1, m2, m3, total, percentage;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks of Subject 1: ";
    cin >> m1;

    cout << "Enter Marks of Subject 2: ";
    cin >> m2;

    cout << "Enter Marks of Subject 3: ";
    cin >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3;

    cout << "\n----- Marksheet -----\n";
    cout << "Name        : " << name << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if (percentage >= 40)
        cout << "Result : Pass" << endl;
    else
        cout << "Result : Fail" << endl;
}

int main()
{
    int choice;

    cout << "------ MENU ------" << endl;
    cout << "1. Student Record Management System" << endl;
    cout << "2. Employee Management System" << endl;
    cout << "3. Salary Management System" << endl;
    cout << "4. Marksheet Generation System" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            studentRecord();
            break;

        case 2:
            employeeRecord();
            break;

        case 3:
            salaryManagement();
            break;

        case 4:
            marksheet();
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}