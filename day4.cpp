#include<iostream>
using namespace std;

int main()
{
    string name;
    int math, physics, chemistry;
    int total;
    float percentage;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter Math marks: ";
    cin >> math;

    cout << "Enter Physics marks: ";
    cin >> physics;

    cout << "Enter Chemistry marks: ";
    cin >> chemistry;

    total = math + physics + chemistry;
    percentage = total / 3.0;

    cout << "\n----- Student Result -----\n";
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << total << "/300" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 80)
    {
        cout << "Grade: A";
    }
    else if (percentage >= 60)
    {
        cout << "Grade: B";
    }
    else if (percentage >= 40)
    {
        cout << "Grade: C";
    }
    else
    {
        cout << "Result: Fail";
    }

    return 0;
}
