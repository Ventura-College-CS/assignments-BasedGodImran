//Changes to be made
#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;

class Course {
private:
    int id; 
    string name; 
    int credit; 

public:
    Course(); 
    Course(int id, string name, int credit); 
    int getId() const; 
    const string &getName() const; 
    int getCredit() const; 
    void setId(int id); 
    void setName(const string &name); 
    void setCredit(int credit); 
    void print() const; 
};


#endif 