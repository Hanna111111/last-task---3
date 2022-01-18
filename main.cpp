#include <iostream>
using namespace std;

struct student
{
    char nameOfTheTask[50];
    int data;
    float Priority;
    
} s[10];

int main()
{
    cout << "Enter description of: " << endl;

    // storing information
    for(int i = 0; i < 10; ++i)
    {
        s[i].data = i+1;
        cout << "Your data: " << s[i].data << "," << endl;

        cout << "Enter name of the Task: ";
        cin >> s[i].nameOfTheTask;

        cout << "Enter priority: ";
        cin >> s[i].Priority;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int i = 0; i < 10; ++i)
    {
        cout << "\nYour Data: " << i+1 << endl;
        cout << "Name of the Task: " << s[i].nameOfTheTask << endl;
        cout << "Priority: " << s[i].Priority << endl;
    }
}
