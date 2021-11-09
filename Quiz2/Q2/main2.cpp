#include<iostream>
#include<fstream>
using namespace std;
int main()
{
const int LEN_NAME=20;
const int NUM_SCORES=3;
double avg;
struct Student
{
int sid;
char sname[LEN_NAME];
double score[NUM_SCORES];
};

struct Student *std=new struct Student;

ifstream in("students.bin",ios::binary);

if(!in)
{
cout<<"Error in file opening";
exit(0);
}
while(!in.eof())
{
in.read((char *) &(*std),sizeof(*std));
avg=0;
for(int i=0;i<NUM_SCORES;i++)
avg=avg+std->score[i];
avg=avg/NUM_SCORES;
if(avg>85)
{
cout<<std->sid<<" "<<std->sname<<" ";
for(int i=0;i<3;i++)
{
cout<<std->score[i]<<" ";
}
cout<<endl;
}

}

in.close();
return 0;
}