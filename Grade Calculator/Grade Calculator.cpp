#include <iostream>

using namespace std;

int main()
{
    int english, chemistry, computers, physics, maths;
    float total, average, percentage;

    cout << "Please Enter the marks of five subjects: \n";
    cin >> english >> chemistry >> computers >> physics >> maths;

    total = english + chemistry + computers + physics + maths;
    average = total / 5;
    percentage = (total / (500)) * 100;

    cout << "\nTotal Marks      = " << total;
    cout << "\nAverage Marks    = " << average;
    cout << "\nMarks Percentage = " << percentage;

    if (percentage >= 90)
    {
        cout << "\nGrade A";
    }
    else if (percentage >= 80)
    {
        cout << "\nGrade B";
    }
    else if (percentage >= 70)
    {
        cout << "\nGrade C";
    }
    else if (percentage >= 60)
    {
        cout << "\nGrade D";
    }
    else if (percentage >= 40)
    {
        cout << "\nGrade E";
    }
    else
    {
        cout << "\nFail";
    }

    return 0;
}