 #include <iostream>
using namespace std;

// Function to Find First Non-Repeating Character
void firstNonRepeating(char str[])
{
    int found = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
                count++;
        }

        if (count == 1)
        {
            cout << "First Non-Repeating Character = " << str[i] << endl;
            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "No Non-Repeating Character Found." << endl;
}

// Function to Find First Repeating Character
void firstRepeating(char str[])
{
    int found = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                cout << "First Repeating Character = " << str[i] << endl;
                found = 1;
                return;
            }
        }
    }

    if (found == 0)
        cout << "No Repeating Character Found." << endl;
}

// Function to Check Anagram Strings
void anagram(char str1[], char str2[])
{
    int count1[26] = {0};
    int count2[26] = {0};

    int i = 0;

    while (str1[i] != '\0')
    {
        count1[str1[i] - 'a']++;
        i++;
    }

    i = 0;

    while (str2[i] != '\0')
    {
        count2[str2[i] - 'a']++;
        i++;
    }

    int anagram = 1;

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            anagram = 0;
            break;
        }
    }

    if (anagram == 1)
        cout << "Strings are Anagrams." << endl;
    else
        cout << "Strings are not Anagrams." << endl;
}

// Function to Find Maximum Occurring Character
void maximumCharacter(char str[])
{
    int maxCount = 0;
    char maxChar;

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    cout << "Maximum Occurring Character = " << maxChar << endl;
    cout << "Frequency = " << maxCount << endl;
}

int main()
{
    int choice;
    char str1[100], str2[100];

    cout << "------ MENU ------" << endl;
    cout << "1. Find First Non-Repeating Character" << endl;
    cout << "2. Find First Repeating Character" << endl;
    cout << "3. Check Anagram Strings" << endl;
    cout << "4. Find Maximum Occurring Character" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter a string: ";
            cin >> str1;
            firstNonRepeating(str1);
            break;

        case 2:
            cout << "Enter a string: ";
            cin >> str1;
            firstRepeating(str1);
            break;

        case 3:
            cout << "Enter first string: ";
            cin >> str1;
            cout << "Enter second string: ";
            cin >> str2;
            anagram(str1, str2);
            break;

        case 4:
            cout << "Enter a string: ";
            cin >> str1;
            maximumCharacter(str1);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}