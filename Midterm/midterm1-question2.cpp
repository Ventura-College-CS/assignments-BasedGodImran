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
    cout << "Score Sum: " << getSum();
}
}:

class StudentCompare
{
    public:
    bool operator()(Student s1, Student s2)
    {

        return s1.getSum() < s2.getSum();

    }


}:

int main()
{

priority_queue<Student, vector<Student>, StudentCompare> pq;
double *scores1 = new double[5]{34.5, 22.4, 65.5, 45.5, 55.2};
Student s1(1,"John",scores1, 5);


}



}