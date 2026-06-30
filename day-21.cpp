  #include <iostream>
using namespace std;

// Function to find String Length without strlen()
void stringLength(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    cout << "Length of String = " << length << endl;
}

// Function to Reverse a String
void reverseString(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    cout << "Reversed String = ";

    for (int i = length - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    cout << endl;
}

// Function to Count Vowels and Consonants
void countVowelsConsonants(char str[])
{
    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
                str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
}

// Function to Convert Lowercase to Uppercase
void lowerToUpper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    cout << "Uppercase String = " << str << endl;
}

int main()
{
    int choice;
    char str[100];

    cout << "------ MENU ------" << endl;
    cout << "1. Find String Length" << endl;
    cout << "2. Reverse a String" << endl;
    cout << "3. Count Vowels and Consonants" << endl;
    cout << "4. Convert Lowercase to Uppercase" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter a string: ";
    cin >> str;

    switch (choice)
    {
        case 1:
            stringLength(str);
            break;

        case 2:
            reverseString(str);
            break;

        case 3:
            countVowelsConsonants(str);
            break;

        case 4:
            lowerToUpper(str);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}