#include <iostream.h>

#include <fstream.h>

#include <stdlib.h>

#include <conio.h>

#include <string.h>

struct Student
{

    int id;

    char sname[20];

    double score[2];

    double sum;

    double avg;
};

int main()
{

    struct Student s[10];

    int x, y;

    ifstream ifs;

    ofstream ofs;

    clrscr();

    ifs.open("students.txt");

    ofs.open("students.bin");

    if (!ifs)
    {

        cout << "could not open the file\n";

        exit(1);
    }
    else
    {

        cout << "ID Name Score1 Score2 Sum Avg " << endl;

        for (int i = 0; i < 10; i++)
        {

            ifs >> s[i].id;

            ifs >> s[i].sname;

            ifs >> s[i].score[0];

            ifs >> s[i].score[1];

            s[i].sum = s[i].score[0] + s[i].score[1];

            s[i].avg = s[i].sum / 2.0;

            cout << s[i].id << " " << s[i].sname << " " << s[i].score[0] << " " << s[i].score[1] << " " << s[i].sum << " " << s[i].avg << endl;

            s[i].sum = 0;

            s[i].avg = 0;

            ofs.write((char *)&s[i], sizeof(Student));
        }
    }

    getch();

    return 0;
}