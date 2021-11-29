#include <iostream>
#include <string>
#include <vector>
#include <queue>
 using namespace std;

class Student
{

private:

int SID;
string SName;
double *scores;
int numScores;

public :
Student()
{

SID = 0;
SName = "";
numScores = 0;
scores = nullptr;

}

Student (int i, string name, double *sc, int n)
{
    SID = i;
    SName = name;
    scores = sc;
    numScores = n;
}

int getID() { return SID; }
string getName() { return SName; }
double *getScores() { return scores}

double getSum()
{

double sum = 0;
for (int i = 0; i < numScores; i++)
{

sum+= scores[i];

}

return sum;
}

void display()
{
    cout << "ID:" << getID()<< " "
    << "Name: " << getName() << " " 
    << "Scores: ";
    for (int i = 0; i < numScores; i++)
    {

        cout << scores[i] << getSum();

    }
}:



}