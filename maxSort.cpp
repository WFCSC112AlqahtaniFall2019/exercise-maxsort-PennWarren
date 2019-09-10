#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v {6, 1, 3, 2, 1};  // initialize v, the vector to be sorted

    print(v); // print the unsorted v
    maxSort(v); // sort v
    print(v);// print the sorted v


    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    for(int i = list.size()-1; i>=0; i--){
        int currentMax = 0;
        for(int j=0; j <= i; j++){
            if(list.at(j) > list.at(currentMax)){
                currentMax = j;
            }
        }
        swap(list.at(currentMax), list.at(i));
    }
}

// swap function
void swap(int& a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

// print function
void print(const vector<int>& list){
    for (int i : list){
        cout << i << " ";
    }
    cout << endl;
}

