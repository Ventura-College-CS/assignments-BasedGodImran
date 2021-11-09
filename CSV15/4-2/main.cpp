#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

void swap(int &a, int &b) {      
   int temp;
   temp = a;
   a = b;
   b = temp;
} 

void sortArray(int arr[], int N) {
    for(int i=0; i<N; i++) {
        bool isSorted = true;
        for(int j=0; j<N - i - 1; j++)
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSorted = false;
        }
        if(isSorted)
            return;
    }
}

void makeArray(int arr[], int N) {

    srand(time(0));
    
    for(int i=0; i<N; i++) {
 
        int temp = 1 + (rand() % (100 - 1) + 1);    
        arr[i] = temp;
    }
}


int linearSearch(int arr[], int N, int target) {
   
    for(int i=0; i<N; i++) {
        if(arr[i] == target)
            return (i + 1);
    }
    
  
    return -1;
}

int binarySearch(int arr[], int N, int target) {
   
    sortArray(arr, N);
    
   
    int left  = 0;
    int right = N - 1;
    int comparisonCount = 0;
    while(left <= right) {
        
        int middle = (left + right) / 2 ;
        
        if(arr[middle] == target)
            return comparisonCount;
        
        
        if(target < arr[middle])
            right = middle - 1;
        else
            left = middle + 1;
        
       
        comparisonCount++;
    }
    
   
    return -1;
}

int main() {
   
    const int N = 64;
    int arr[N];
    int linearComparisons = 0;
    int binaryComparisons = 0;
    
    makeArray(arr, N);
    
    srand(time(0));
    
    for(int i=0; i<100; i++) {
        
        int tempIndex = 0 + (rand() % (64 - 0) + 0);
  
        int target = arr[tempIndex];   
        int temp1 = linearSearch(arr, N, target);
        int temp2 = binarySearch(arr, N, target);
        
    
        linearComparisons += temp1;
        binaryComparisons += temp2;
    }
    
    cout << "Average comparisons made in linear search is: " << linearComparisons/100 << endl;
    cout << "Average comparisons made in binary search is: " << binaryComparisons/100 << endl;
    return 0;
}