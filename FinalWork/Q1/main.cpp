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