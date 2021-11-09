#include<iostream>
#include<fstream>

using namespace std;
int main()
{
const int LEN_NAME=20;
const int NUM_SCORES=3;
struct Student
{
int sid;
char sname[LEN_NAME];
double score[NUM_SCORES];
};

struct Student *std=new struct Student;

ifstream in("students.txt");

if(!in)
{
cout<<"Error in file opening";
exit(0);
}

ofstream out("students.bin",ios::binary);
while(!in.eof())
{
in>>std->sid;
in>>std->sname;
for(int i=0;i<NUM_SCORES;i++)
{
in>>std->score[i];
}

out.write((char *) &(*std),sizeof(*std));
}
in.close();
out.close();
return 0;
}