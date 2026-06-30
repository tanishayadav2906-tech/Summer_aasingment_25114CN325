 #include <iostream>
using namespace std;

// Function for Number Guessing Game
void numberGuessing()
{
    int secret = 7;
    int guess;

    cout << "Guess a number between 1 and 10: ";
    cin >> guess;

    if (guess == secret)
        cout << "Congratulations! You guessed correctly." << endl;
    else
        cout << "Wrong Guess! The correct number is " << secret << endl;
}

// Function for Voting Eligibility
void votingEligibility()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
        cout << "You are Eligible to Vote." << endl;
    else
        cout << "You are Not Eligible to Vote." << endl;
}

// Function for ATM Simulation
void atmSimulation()
{
    int choice;
    float balance = 10000, amount;

    cout << "\nATM MENU\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Current Balance = " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance = balance + amount;
            cout << "Updated Balance = " << balance << endl;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance = balance - amount;
                cout << "Remaining Balance = " << balance << endl;
            }
            else
            {
                cout << "Insufficient Balance!" << endl;
            }
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }
}

// Function for Quiz Application
void quizApplication()
{
    int answer;
    int score = 0;

    cout << "Q1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nQ2. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nQ3. Which language is used for C++ programs?\n";
    cout << "1. C++\n2. Java\n3. Python\n4. HTML\n";
    cin >> answer;

    if (answer == 1)
        score++;

    cout << "\nYour Score = " << score << "/3" << endl;
}

int main()
{
    int choice;

    cout << "------ MENU ------" << endl;
    cout << "1. Number Guessing Game" << endl;
    cout << "2. Voting Eligibility System" << endl;
    cout << "3. ATM Simulation" << endl;
    cout << "4. Quiz Application" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            numberGuessing();
            break;

        case 2:
            votingEligibility();
            break;

        case 3:
            atmSimulation();
            break;

        case 4:
            quizApplication();
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}