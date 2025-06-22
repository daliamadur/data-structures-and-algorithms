#include "Dynamic_Array.hpp"
#include <string>
#include <iostream>

using namespace std;

int main()
{

    try {
        Dynamic_Array<string> arr = { ":)", ":0", ":3", ":P" };
        arr.print();
        arr.flush();
        arr.print();
    }
    catch (exception e) {
        cout << e.what();
    }
    
    return 0;
}