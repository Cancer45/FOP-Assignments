#include <iostream>

using namespace std;

int main() {
    
    int arr [6] = {2, 3, 5, 7, 11, 13};
    
    int largest_prime = 2;
    int n;
    cin >> n;
    
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (arr [j] == i)
            {
                continue;
            }
            
            if (i % arr [j] == 0)
            {
                break;
            }
            
            if (j == 5)
            {
                b = i;
            }
        }
    }
    
    cout << b;

    return 0;
}

