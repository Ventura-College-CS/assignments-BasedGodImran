// still on this 

#include <iostream>
#include <fstream>
#include "Course.h"
using namespace std;


int binary_search(Course[], int, int);
int recursive_binary_search(Course[], int, int, int);

int main() {

    
    ifstream data_file("input_data.txt");

    
    if (data_file.fail()) {
       
        cout << "Error!!! Failed to open input_data.txt file..." << endl;
        cout << "Make sure input_data.txt file is present in the current working directory." << endl;
        return 1;
    }

   
    Course courses[10];
    int n = 0;
    while (!data_file.eof()) {
        int id, credit;
        string name;

       
        data_file >> id;
        data_file >> name;
        data_file >> credit;

      
        Course c(id, name, credit);
        courses[n++] = c;
    }

   
    data_file.close();

    for (int p = 0; p < n; p++) {
        for (int q = 0; q < n - p - 1; q++) {
            if (courses[q].getId() > courses[q + 1].getId()) {
                Course c = courses[q];
                courses[q] = courses[q + 1];
                courses[q + 1] = c;
            }
        }
    }

    while (true) {
        int id;
        cout << "Enter course id to search (-1 to exit): ";
        cin >> id;
        if (id == -1) {
            break;
        }
        int x = binary_search(courses, n, id);
        int y = recursive_binary_search(courses, 0, n - 1, id);
        if (x != -1) {
            cout << "Course found at index " << x << endl;
            cout << "\nResult from iterative binary search: ";
            courses[x].print();
            cout << "\nResult from recursive binary search: ";
            courses[y].print();
            cout << endl;
        } else {
            cout << "Course with id=" << id << " not found..." << endl;
        }
    }

    return 0;
