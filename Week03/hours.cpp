#include <iostream>
#include <string>

using namespace std;

int main()
{
    int duration, hours, minutes;
    cout << "How long is the duration in minutes?" << endl;
    cin >> duration;
    hours = duration / 60;
    minutes = duration % 60;

    cout << "The duration is " << hours << " hours and " << minutes << " minutes." << endl;




}