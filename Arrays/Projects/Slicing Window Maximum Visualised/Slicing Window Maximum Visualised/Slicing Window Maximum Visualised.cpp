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


vector<int> maxSlicingWindow(vector<int> vec, int k) {
    vector<int> output;
    int max, start, end;

    for (int i = 0; i < vec.size() - k + 1; i++) {
        max = 0;
        start = i;
        end = i + k;

        cout << "Iteration " << i + 1 << endl << "-----------" << endl;
        printVec(vec, start, k);
        
        cout << endl << "max(";

        for (int j = start; j < end; j++) {
            
            cout << vec[j];

            if (j < end - 1) {
                cout << ", ";
            }

            if (vec[j] > max) {
                max = vec[j];
            }
        }

        cout << ") = " << max << endl;
        
        output.push_back(max);
        
        cout << "output = ";
        printVec(output);
        cout << endl << endl;
    }

    return output;
}

int main()
{
    //vars
    vector<int> vec = { 3, 6, 3, 7, 3, 5, 2, 4 };
    int k = 3;

    //paragraph
    cout << "--- MAX SLICING WINDOW ALGORITHM VISUALISED ---" << endl << endl;
    cout << "You are given an array of integers nums and an integer k. ";
    cout << "There is a sliding window of size k that starts at the left edge of the array ";
    cout << "The window slides one position to the right until it reaches the right edge of the array. " << endl << endl;
    cout << "Return a list that contains the maximum element in the window at each step." << endl << endl;
    cout << "----------------------------------------" << endl << "Array = ";
    printVec(vec);
    cout << " | k = " << k << endl;
    cout << "{x, y, z} => current window" << endl << "----------------------------------------" << endl << endl;

    //computation
    maxSlicingWindow(vec, k);
}