#include <iostream>

#include <ctime>

#include <stdlib.h>

using namespace std;

void fillupArray(int *arr)

{

    srand(time(0));
      for (int i = 0; i < 10; i++)

       
    {

                        arr[i] = rand() % 100;
          

       
    }
}

void printArray(int *arr)

{

            for (int i = 0; i < 10; i++)

                cout << arr[i] << " ";

            return;
}

int main()

{

            int *arr = new int[10];
      // create space for 10 integer values





    fillupArray(arr);

            // print the array

        printArray(arr);

            return 0;
}