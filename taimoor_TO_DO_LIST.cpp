
#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<string> TaskList;
void print_list();
void print_command();

int main()
{
    string task;
    int command;

    while (command != 0)
    {
        print_list();

        while (true)
        {
            print_command();
            cout << "enter your command =";
            cin >> command;

            if (command == 1)
            {
                cout << "Enter the task =";
                getline(cin >> ws, task);
                TaskList.push_back(task);
                break;
            }

            else if (command == 2 && TaskList.size() == 0)
            {
                cout << "Cannot remove because TaskList is empty " << endl;
                continue;
            }
            else if (command == 2)
            {
                TaskList.erase(TaskList.begin());
                break;
            }

            else if (command == 0)
            {
                break;
            }
            else
            {
                cout << "invalid input" << endl;
                continue;
            }
        }
        system("cls"); // for linux  system("clear");
    }
       print_list();
}
void print_list()
{
    cout << "                     ------------------------------------" << endl;
    cout << "                     |          TO DO LIST              |" << endl;
    cout << "                     ------------------------------------" << endl;
    cout << "\n\n\n";
    for (int i = 0; i < TaskList.size(); i++)
    {
        cout << "                      " << i + 1 << " = " << TaskList[i] << endl;
    }

    cout << "                     -----------------------------------" << endl;
    cout << "\n\n\n\n\n\n";
}
void print_command()
{

    cout << "------------------------------------" << endl;
    cout << "------------------------------------" << endl;
    cout << "|     Enter 1 for ADD              |" << endl;
    cout << "|     Enter 2 for REMOVE TASK      |" << endl;
    cout << "|     Enter 0 for EXIT             |" << endl;
    cout << "------------------------------------" << endl;
    cout << "------------------------------------" << endl;
    cout << endl;
}
