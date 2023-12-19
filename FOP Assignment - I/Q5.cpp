#include <iostream>

using namespace std;

int main() {
    
    int arr [6] = {37, 30, 55, 23, 71, 44};
    int temp;
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j< 6; j++)
        {
            if (arr [i] < arr [j])
            {
                temp = arr [i];
                arr [i] = arr [j];
                arr [j] = temp;
            }
        }
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout << arr [i] << endl;
    }
    
    return 0;
}

