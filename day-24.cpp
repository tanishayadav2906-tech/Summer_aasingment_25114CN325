   #include <iostream>
using namespace std;

// Function to Check String Rotation
void stringRotation(char str1[], char str2[])
{
    int len1 = 0, len2 = 0;

    while (str1[len1] != '\0')
        len1++;

    while (str2[len2] != '\0')
        len2++;

    if (len1 != len2)
    {
        cout << "Strings are not Rotations." << endl;
        return;
    }

    char temp[200];
    int k = 0;

    for (int i = 0; i < len1; i++)
        temp[k++] = str1[i];

    for (int i = 0; i < len1; i++)
        temp[k++] = str1[i];

    temp[k] = '\0';

    int found = 0;

    for (int i = 0; i <= len1; i++)
    {
        int j;

        for (j = 0; j < len2; j++)
        {
            if (temp[i + j] != str2[j])
                break;
        }

        if (j == len2)
        {
            found = 1;
            break;
        }
    }

    if (found)
        cout << "Strings are Rotations." << endl;
    else
        cout << "Strings are not Rotations." << endl;
}

// Function to Compress String
void compressString(char str[])
{
    cout << "Compressed String = ";

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;

        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        cout << str[i] << count;
    }

    cout << endl;
}

// Function to Find Longest Word
void longestWord(char str[])
{
    int maxLength = 0, currentLength = 0;
    int start = 0, maxStart = 0;

    for (int i = 0;; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            currentLength++;
        }
        else
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                maxStart = start;
            }

            currentLength = 0;
            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    cout << "Longest Word = ";

    for (int i = maxStart; i < maxStart + maxLength; i++)
    {
        cout << str[i];
    }

    cout << endl;
}

// Function to Remove Duplicate Characters
void removeDuplicates(char str[])
{
    cout << "String after removing duplicates: ";

    for (int i = 0; str[i] != '\0'; i++)
    {
        int duplicate = 0;

        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0)
            cout << str[i];
    }

    cout << endl;
}

int main()
{
    int choice;
    char str1[100], str2[100];

    cout << "------ MENU ------" << endl;
    cout << "1. Check String Rotation" << endl;
    cout << "2. Compress a String" << endl;
    cout << "3. Find Longest Word" << endl;
    cout << "4. Remove Duplicate Characters" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    switch (choice)
    {
        case 1:
            cout << "Enter first string: ";
            cin.getline(str1, 100);

            cout << "Enter second string: ";
            cin.getline(str2, 100);

            stringRotation(str1, str2);
            break;

        case 2:
            cout << "Enter a string: ";
            cin.getline(str1, 100);

            compressString(str1);
            break;

        case 3:
            cout << "Enter a sentence: ";
            cin.getline(str1, 100);

            longestWord(str1);
            break;

        case 4:
            cout << "Enter a string: ";
            cin.getline(str1, 100);

            removeDuplicates(str1);
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}