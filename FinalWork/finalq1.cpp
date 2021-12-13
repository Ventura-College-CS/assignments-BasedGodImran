// Finally getting started!

#include <iostream>
using namespace std;
class Course 
{
    public:
        int id,credit;
        string name;
        Course(int courseId,string courseName,int courseCredit) 
        {
            id=courseId;
            name=courseName;
            credit=courseCredit;
        }
};
void swapInt(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}