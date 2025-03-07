#include <iostream> 
#include <cstdlib>
#include <ctime> 
using namespace std;
int main()

{
    srand(time(0));
    int number;
    number = rand() % 20000 - 10000;
   
    if (number < 0)
    {
       number =  number * -1;
    }
    
    if (number % 3 == 0 && (number % 5 == 0)) 
    {
        cout << "fizzbuzz" << endl;
    }

    else if (number % 3 == 0)
    {
        cout << "fizz"  << endl;
    }
    else if (number % 5 == 0)
    {
        cout << "buzz" << endl;
    }
    



}