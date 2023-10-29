#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> s;
    int choice;
    char c;

    do
    {
        cout << "Enter your choice:" << endl;
        cout << "1. Push a character onto the stack" << endl;
        cout << "2. Pop a character from the stack" << endl;
        cout << "3. Display all elements in the stack" << endl;
        cout << "4. Exit the program" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter a character to push into the stack: ";
            cin >> c;
            s.push(c);
            break;

        case 2:
            if (s.empty())
            {
                cout << "Stack is empty";
            }
            else
            {
                s.top();
                s.pop();
            }
            break;

        case 3:
            if (s.empty())
            {
                cout << "Stack is empty";
            }
            else
            {
                while (!s.empty())
                {
                    cout << s.top() << endl;
                    s.pop();
                }
            }
        case 4:
            cout << "Exiting program" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 4);
    return 0;
}