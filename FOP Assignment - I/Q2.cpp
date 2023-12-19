#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int bin, count;
    string input;
    getline (cin, input);    
    char result [input.length () + 1];
    
    for (int i = 0; i < input.length (); i++)
    {
        bin = 0;
        
        for (int j = 0; j <= i; j++)
        {
            if (input [i] == result [j])
            {
                bin = 1;
                break;
            }
        }
        
        if (bin == 0)
        {
            result [count] = input [i];
            count++;
        }
    }
    
    result [count] = '\0';
    cout << result;
    
    return 0;


