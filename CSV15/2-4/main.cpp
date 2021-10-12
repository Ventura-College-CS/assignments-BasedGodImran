#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct student
{
    int rollNo;
    char name[50];
    int marks[3];
    int total;
};

bool compare(student a, student b)
{
    if (a.total < b.total)
        return 1;
    else
        return 0;
}
int main()
{

    student *studentDynArray;
    studentDynArray = new (nothrow) student[10];

    ifstream fin("student.txt");
    string line;

    int a, b;
    char ch[20];
    int i = 0;
    while (getline(fin, line))
    {
        if (i > 9)
            break;
        istringstream ss(line);
        ss >> studentDynArray[i].rollNo >> studentDynArray[i].name >> studentDynArray[i].marks[0] >> studentDynArray[i].marks[1] >> studentDynArray[i].marks[2];
        i++;
    }
    cout << "Print all Student's Information";
    for (int j = 0; j < i; j++)
    {
        cout << "\n"
             << studentDynArray[j].rollNo << " " << studentDynArray[j].name << " " << studentDynArray[j].marks[0] << " " << studentDynArray[j].marks[1] << " " << studentDynArray[j].marks[2];
    }

    for (int j = 0; j < i; j++)
        studentDynArray[j].total = studentDynArray[j].marks[0] + studentDynArray[j].marks[1] + studentDynArray[j].marks[2];

    sort(studentDynArray, studentDynArray + i, compare);
    cout << "\n\nSort the student's infornation with ascending order of score summation" << endl;
    cout << "\nPrint all Student's Information" << endl;
    for (int j = 0; j < i; j++)
    {
        cout << "\n"
             << studentDynArray[j].rollNo << " " << studentDynArray[j].name << " " << studentDynArray[j].total;
    }
    return 0;
}