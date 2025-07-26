// Slicing Window Maximum Visualised.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

//[{1, 3, 2}, 5, 8, 7] = > [1, 3, 2]
//max(1, 3, 2) = 3
//output = [3]

template<typename T>
void printVec(vector<T>& vec, int window_start = 0, int k = 0) {
    
    bool window = k;
    int window_end = (window_start + k) - 1;
    
    cout << "[";

    for (int i = 0; i < vec.size(); i++) {
        
        if (window && i == window_start) {
            cout << "{";
        }
        
        cout << vec[i];
        
        if (window && i == window_end) {
            cout << "}";
        }

        if (i < vec.size() - 1) {
            cout << ", ";
        }

    }

    cout << "]";
}


vector<int> MaxSlicingWindow(vector<int> vec, int k) {
    vector<int> output;

    return output;
}

int main()
{
    vector<int> vec = { 3, 6, 3, 7, 3, 5, 2, 4 };
}