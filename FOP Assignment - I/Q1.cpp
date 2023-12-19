#include <iostream>
#include <cstring>

using namespace std;

int main() {

    string str1, str2;
    cout << "First String: ";
    cin >> str1;
    cout << "Second String: ";
    cin >> str2;
    if (str1 == str2)
    {
        cout << "Equal" << endl;
        char str2_[str2.length () + 1];
        for (int i = 0; i < str2.length (); i++)
        {
            str2_[i] = str2 [str2.length () - 1 - i];
        }
        str2_ [str2.length ()] = '\0';
        cout << str1 << endl << str2_;
    }
    
    else
    {
        cout << "Unequal" << endl;
        cout << str1 << endl << str2;
    }
    return 0;
}
