#include <iostream>
#include <string>

using namespace std;

int main()
{
    string month = "2";
    string day = "14";
    string year = "2025";
    string date = "Today is ";
    string greeting = " Happy Valentine's Day!";

    char dilimeter = '/';

    cout << date << month << dilimeter << day << dilimeter << year << greeting << endl;
}