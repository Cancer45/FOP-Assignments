#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int array [5] = {1, 2, 3, 4, 5};
    
    array [5] = 8;
    array [6] = 9;
    
    for (int i = 0; i < 7; i++)
    {
        cout << array [i] << endl;
    }
    
    return 0;
}
