#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    int prev = 0, current = 1, next;
    
    cout << "Enter an non negative number" << endl;
    cin >> num;

    for(int i = 2; i <= num ;i++)
    {
        next= prev + current;
        prev = current;
        current = next;
    }

    cout << next << endl;

    
    return 0;
}
