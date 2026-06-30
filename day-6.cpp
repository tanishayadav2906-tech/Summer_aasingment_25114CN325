 #include <iostream>
using namespace std;

// Function to convert Decimal to Binary
void decimalToBinary(int num)
{
    int binary = 0, place = 1, rem;

    while (num > 0)
    {
        rem = num % 2;
        binary = binary + rem * place;
        place = place * 10;
        num = num / 2;
    }

    cout << "Binary = " << binary << endl;
}

// Function to convert Binary to Decimal
void binaryToDecimal(int num)
{
    int decimal = 0, base = 1, rem;

    while (num > 0)
    {
        rem = num % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        num = num / 10;
    }

    cout << "Decimal = " << decimal << endl;
}

// Function to count set bits
void countSetBits(int num)
{
    int count = 0;

    while (num > 0)
    {
        if (num % 2 == 1)
            count++;

        num = num / 2;
    }

    cout << "Number of Set Bits = " << count << endl;
}

// Function to find x^n without pow()
void power(int x, int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    cout << "Answer = " << result << endl;
}

int main()
{
    int choice, num, x, n;

    cout << "------ MENU ------" << endl;
    cout << "1. Convert Decimal to Binary" << endl;
    cout << "2. Convert Binary to Decimal" << endl;
    cout << "3. Count Set Bits in a Number" << endl;
    cout << "4. Find x^n without pow()" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter a decimal number: ";
            cin >> num;
            decimalToBinary(num);
            break;

        case 2:
            cout << "Enter a binary number: ";
            cin >> num;
            binaryToDecimal(num);
            break;

        case 3:
            cout << "Enter a number: ";
            cin >> num;
            countSetBits(num);
            break;

        case 4:
            cout << "Enter the value of x: ";
            cin >> x;
            cout << "Enter the value of n: ";
            cin >> n;
            power(x, n);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}