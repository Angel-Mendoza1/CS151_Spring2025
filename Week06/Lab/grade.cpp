#include <iostream> 
#include <cstdlib>
#include <ctime> 
using namespace std;
int main()
{
    int score;
    cin >> score;
    char grade;
    
    if (score < 0 || (score > 100))
    {
        cout << "Invaild score" << endl;
    }
    else{
        if (score >= 90)
        {
         grade = 'A';
         cout << "You got an " << score << " which is a " << grade << endl;
        }
        if (score <= 89 && score >= 80)
        {
         grade = 'B';
         cout << "You got an " << score << " which is a " << grade << endl;
        }
        if (score <= 79 && score >= 70)
        {
            grade = 'C';
            cout << "You got an " << score << " which is a " << grade << endl;
        }
        if (score <= 69 && score >= 60)
        {
            grade = 'D';
            cout << "You got an " << score << " which is a " << grade << endl;
        }
        if (score <=59 && score >= 0)
        {
            grade = 'F';
            cout << "You got an " << score << " which is a " << grade << endl;
        }
    }

    
    
    
}