#include <bits/stdc++.h>
using namespace std;

int main()
{
        string str;
        cout << "Enter your name: ";
        getline(cin, str);
        if ((str[0] == 'M' || str[0] == 'm') && (str[1] == 'R' || str[1] == 'r') && (str[2] == 'S' || str[2] == 's'))
        {
            cout << "Female" << endl;
        }
        else if ((str[0] == 'M' || str[0] == 'm') && (str[1] == 'R' || str[1] == 'r'))
        {
            cout << "Male" << endl;
        }
        if ((str[0] == 'M' || str[0] == 'm') && (str[1] == 'S' || str[1] == 's'))
        {
            cout << "Female" << endl;
        }
}