 #include <iostream>
using namespace std;

// Function to Merge Two Sorted Arrays
void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2)
{
    int i = 0, j = 0;

    cout << "Merged Sorted Array: ";

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else
            cout << arr2[j++] << " ";
    }

    while (i < n1)
        cout << arr1[i++] << " ";

    while (j < n2)
        cout << arr2[j++] << " ";

    cout << endl;
}

// Function to Find Common Characters in Strings
void commonCharacters(char str1[], char str2[])
{
    cout << "Common Characters: ";

    for (int i = 0; str1[i] != '\0'; i++)
    {
        int printed = 0;

        for (int k = 0; k < i; k++)
        {
            if (str1[i] == str1[k])
            {
                printed = 1;
                break;
            }
        }

        if (printed)
            continue;

        for (int j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                cout << str1[i] << " ";
                break;
            }
        }
    }

    cout << endl;
}

// Function to Sort Names Alphabetically
void sortNames(char names[][20], int n)
{
    char temp[20];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int k = 0;

            while (names[i][k] == names[j][k] &&
                   names[i][k] != '\0' &&
                   names[j][k] != '\0')
            {
                k++;
            }

            if (names[i][k] > names[j][k])
            {
                int x = 0;
                while (names[i][x] != '\0')
                {
                    temp[x] = names[i][x];
                    x++;
                }
                temp[x] = '\0';

                x = 0;
                while (names[j][x] != '\0')
                {
                    names[i][x] = names[j][x];
                    x++;
                }
                names[i][x] = '\0';

                x = 0;
                while (temp[x] != '\0')
                {
                    names[j][x] = temp[x];
                    x++;
                }
                names[j][x] = '\0';
            }
        }
    }

    cout << "Names in Alphabetical Order:\n";

    for (int i = 0; i < n; i++)
        cout << names[i] << endl;
}

// Function to Sort Words by Length
void sortWordsByLength(char words[][20], int n)
{
    char temp[20];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int len1 = 0, len2 = 0;

            while (words[i][len1] != '\0')
                len1++;

            while (words[j][len2] != '\0')
                len2++;

            if (len1 > len2)
            {
                int x = 0;
                while (words[i][x] != '\0')
                {
                    temp[x] = words[i][x];
                    x++;
                }
                temp[x] = '\0';

                x = 0;
                while (words[j][x] != '\0')
                {
                    words[i][x] = words[j][x];
                    x++;
                }
                words[i][x] = '\0';

                x = 0;
                while (temp[x] != '\0')
                {
                    words[j][x] = temp[x];
                    x++;
                }
                words[j][x] = '\0';
            }
        }
    }

    cout << "Words Sorted by Length:\n";

    for (int i = 0; i < n; i++)
        cout << words[i] << endl;
}

int main()
{
    int choice;

    cout << "------ MENU ------" << endl;
    cout << "1. Merge Two Sorted Arrays" << endl;
    cout << "2. Find Common Characters in Strings" << endl;
    cout << "3. Sort Names Alphabetically" << endl;
    cout << "4. Sort Words by Length" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            int n1, n2;
            int arr1[100], arr2[100];

            cout << "Enter size of first array: ";
            cin >> n1;
            cout << "Enter first sorted array: ";
            for (int i = 0; i < n1; i++)
                cin >> arr1[i];

            cout << "Enter size of second array: ";
            cin >> n2;
            cout << "Enter second sorted array: ";
            for (int i = 0; i < n2; i++)
                cin >> arr2[i];

            mergeSortedArrays(arr1, n1, arr2, n2);
            break;
        }

        case 2:
        {
            char str1[100], str2[100];

            cout << "Enter first string: ";
            cin >> str1;

            cout << "Enter second string: ";
            cin >> str2;

            commonCharacters(str1, str2);
            break;
        }

        case 3:
        {
            int n;
            char names[20][20];

            cout << "Enter number of names: ";
            cin >> n;

            cout << "Enter names:\n";
            for (int i = 0; i < n; i++)
                cin >> names[i];

            sortNames(names, n);
            break;
        }

        case 4:
        {
            int n;
            char words[20][20];

            cout << "Enter number of words: ";
            cin >> n;

            cout << "Enter words:\n";
            for (int i = 0; i < n; i++)
                cin >> words[i];

            sortWordsByLength(words, n);
            break;
        }

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}