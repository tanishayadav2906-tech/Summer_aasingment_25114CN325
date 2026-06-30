 #include <iostream>
using namespace std;

// Function for Library Management System
void libraryManagement()
{
    int bookID;
    char bookName[50];
    char author[50];

    cout << "Enter Book ID: ";
    cin >> bookID;

    cout << "Enter Book Name: ";
    cin >> bookName;

    cout << "Enter Author Name: ";
    cin >> author;

    cout << "\n----- Library Record -----\n";
    cout << "Book ID    : " << bookID << endl;
    cout << "Book Name  : " << bookName << endl;
    cout << "Author     : " << author << endl;
}

// Function for Bank Account System
void bankAccount()
{
    char name[50];
    int accountNo;
    float balance, deposit, withdraw;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> accountNo;

    cout << "Enter Current Balance: ";
    cin >> balance;

    cout << "Enter Deposit Amount: ";
    cin >> deposit;

    balance = balance + deposit;

    cout << "Enter Withdraw Amount: ";
    cin >> withdraw;

    if (withdraw <= balance)
    {
        balance = balance - withdraw;
    }
    else
    {
        cout << "Insufficient Balance!" << endl;
    }

    cout << "\n----- Bank Account Details -----\n";
    cout << "Name            : " << name << endl;
    cout << "Account Number  : " << accountNo << endl;
    cout << "Final Balance   : " << balance << endl;
}

// Function for Ticket Booking System
void ticketBooking()
{
    char name[50];
    int tickets;
    float price = 500;
    float total;

    cout << "Enter Customer Name: ";
    cin >> name;

    cout << "Enter Number of Tickets: ";
    cin >> tickets;

    total = tickets * price;

    cout << "\n----- Ticket Details -----\n";
    cout << "Customer Name : " << name << endl;
    cout << "Tickets       : " << tickets << endl;
    cout << "Total Amount  : " << total << endl;
}

// Function for Contact Management System
void contactManagement()
{
    char name[50];
    char phone[20];

    cout << "Enter Contact Name: ";
    cin >> name;

    cout << "Enter Phone Number: ";
    cin >> phone;

    cout << "\n----- Contact Details -----\n";
    cout << "Name         : " << name << endl;
    cout << "Phone Number : " << phone << endl;
}

int main()
{
    int choice;

    cout << "------ MENU ------" << endl;
    cout << "1. Library Management System" << endl;
    cout << "2. Bank Account System" << endl;
    cout << "3. Ticket Booking System" << endl;
    cout << "4. Contact Management System" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            libraryManagement();
            break;

        case 2:
            bankAccount();
            break;

        case 3:
            ticketBooking();
            break;

        case 4:
            contactManagement();
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}