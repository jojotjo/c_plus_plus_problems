// triangle pattern in number format

// output
//  1
//  1 2
//  1 2 3
//  1 2 3 4

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "input the pattern format number : ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}