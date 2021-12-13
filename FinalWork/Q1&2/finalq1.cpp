// Getting into Q1, not sure if i am doing this right.

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
void sort(Course arr[10]) 
{
    for(int i=0;i<10-1;i++)
    {
        for(int j=0;j<10-i-1;j++)
        {
            if(arr[j].id>arr[j+1].id)
            {
                swapInt(&arr[j].id,&arr[j+1].id);
                string temp=arr[j].name;
                arr[j].name=arr[j+1].name;
                arr[j+1].name=temp;
                swapInt(&arr[j].credit,&arr[j+1].credit);
            }

            
        }
    }
}