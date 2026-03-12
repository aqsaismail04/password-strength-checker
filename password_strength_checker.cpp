#include<iostream>
using namespace std;

int main()
{
    cout << "=====================================================\n";
    cout << "            PASSWORD STRENGTH CHECKER\n";
    cout << "=====================================================\n";
    cout << "Developed By: MUHAMMAD NOUMAN & AQSA ISMAIL\n";
    cout << "=====================================================\n\n";

    cout << "PASSWORD RULES\n";
    cout << "-----------------------------------------------------\n";
    cout << "1. Minimum Length\n";
    cout << "   -> Password must be at least 8 characters long\n\n";

    cout << "2. No Spaces\n";
    cout << "   -> Password should NOT contain spaces\n\n";

    cout << "3. Character Variety\n";
    cout << "   -> Use a mix of:\n";
    cout << "      - Uppercase Letters (A-Z)\n";
    cout << "      - Lowercase Letters (a-z)\n";
    cout << "      - Digits (0-9)\n";
    cout << "      - Special Characters (@,#,$,%,etc)\n";

    cout << "=====================================================\n";

    system("pause");

    char password[50] = { '\0' };

    while (true)
    {
        cout << "\n-----------------------------------------------------\n";
        cout << "Enter Your Password (Minimum 8 Characters): ";
        cin.getline(password, 50);

        int length = 0;

        while (password[length] != '\0')
        {
            length++;
        }

        cout << "\nPassword Length: " << length << " characters\n";

        if (length < 8)
        {
            cout << "ERROR: Minimum 8 characters required!\n";
            continue;
        }

        int space = 0;

        for (int i = 0; i < length; i++)
        {
            if (password[i] == ' ')
            {
                space = 1;
                break;
            }
        }

        if (space == 0)
        {
            cout << "Space Check: PASSED (No spaces found)\n";
        }
        else
        {
            cout << "ERROR: Password contains spaces!\n";
            continue;
        }

        int lowercase = 0;
        int uppercase = 0;
        int digits = 0;
        int special = 0;

        for (int i = 0; i < length; i++)
        {
            if (password[i] == ' ')
            {
                continue;
            }

            if (password[i] >= 'a' && password[i] <= 'z')
            {
                lowercase++;
            }
            else if (password[i] >= 'A' && password[i] <= 'Z')
            {
                uppercase++;
            }
            else if (password[i] >= '0' && password[i] <= '9')
            {
                digits++;
            }
            else
            {
                special++;
            }
        }

        cout << "\nCharacter Analysis\n";
        cout << "-----------------------------------------------------\n";
        cout << "Lowercase Letters  : " << lowercase << endl;
        cout << "Uppercase Letters  : " << uppercase << endl;
        cout << "Digits             : " << digits << endl;
        cout << "Special Characters : " << special << endl;

        cout << "-----------------------------------------------------\n";

        if (lowercase > 0 && uppercase > 0 && digits > 0 && special > 0)
        {
            cout << "Password Strength : STRONG\n";
        }
        else if ((lowercase > 0 && uppercase > 0) || (digits > 0 && special > 0))
        {
            cout << "Password Strength : MEDIUM\n";
        }
        else
        {
            cout << "Password Strength : WEAK\n";
        }

        int again = 0;

        while (true)
        {
            cout << "\n=====================================================\n";
            cout << "1. Check Another Password\n";
            cout << "2. Exit Program\n";
            cout << "Enter Your Choice: ";

            cin >> again;
            cin.ignore();

            if (again == 1 || again == 2)
            {
                break;
            }

            cout << "Invalid choice! Please enter 1 or 2\n";
        }

        if (again == 1)
        {
            continue;
        }

        if (again == 2)
        {
            cout << "\nClosing Program...\n";
            break;
        }
    }

    system("pause");
    return 0;
}