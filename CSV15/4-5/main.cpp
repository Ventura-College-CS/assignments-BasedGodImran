#include<bits/stdc++.h>
using namespace std;

int main() {
    const int N = 10;
    vector <int> IDs(N);
    vector <string> names(N);

    for(int i = 0; i < N; i++){
        cin >> IDs[i] >> names[i];
    }
    multimap <string,int> sortedRecords;

    for(int i = 0; i < N; i++){
        sortedRecords.insert({names[i],IDs[i]});
    }
    cout << "\nStudents records sorted by their name\n";
    for(auto sortedRecord : sortedRecords){
        cout << sortedRecord.second << " " << sortedRecord.first << "\n";
    }
}