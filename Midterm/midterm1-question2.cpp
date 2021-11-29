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


double *scores1 = new double[5]{24.5, 22.7, 65.5, 75.5, 55.2};
Student s1(1,"John",scores1, 5);

double *scores2 = new double[5]{34.5, 26.4, 45.5, 45.5, 55.8};
Student s2(2,"Tom",scores2, 5);


double *scores3 = new double[5]{74.3, 39.4, 61.5, 45.4, 35.2};
Student s3(3,"Greg",scores3, 5);


double *scores4 = new double[5]{33.5, 72.5, 62.5, 45.2, 25.2};
Student s4(4,"Kendall",scores4, 5);


double *scores5 = new double[5]{64.5, 22.4, 95.5, 45.1, 15.2};
Student s5(5,"Roman",scores5, 5);



}



}