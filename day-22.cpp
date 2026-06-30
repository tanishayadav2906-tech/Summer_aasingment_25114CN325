 #include <iostream>
using namespace std;

// Function to Check Palindrome String
void palindromeString(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    int palindrome = 1;

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
        cout << "String is Palindrome." << endl;
    else
        cout << "String is not Palindrome." << endl;
}

// Function to Count Words in a Sentence
void countWords(char str[])
{
    int words = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            words++;
    }

    cout << "Number of Words = " << words << endl;
}

// Function to Find Character Frequency
void characterFrequency(char str[])
{
    char ch;
    int count = 0;

    cout << "Enter character to find frequency: ";
    cin >> ch;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    cout << "Frequency of '" << ch << "' = " << count << endl;
}

// Function to Remove Spaces from String
void removeSpaces(char str[])
{
    char result[100];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    cout << "String after removing spaces: " << result << endl;
}

int main()
{
    int choice;
    char str[100];

    cout << "------ MENU ------" << endl;
    cout << "1. Check Palindrome String" << endl;
    cout << "2. Count Words in a Sentence" << endl;
    cout << "3. Character Frequency" << endl;
    cout << "4. Remove Spaces from String" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    cout << "Enter a string: ";
    cin.getline(str, 100);

    switch (choice)
    {
        case 1:
            palindromeString(str);
            break;

        case 2:
            countWords(str);
            break;

        case 3:
            characterFrequency(str);
            break;

        case 4:
            removeSpaces(str);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}