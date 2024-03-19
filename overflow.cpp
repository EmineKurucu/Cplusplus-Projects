/* When a variable is assigned a number that is too large for its data type, it overflows
likewise assigning a value that is too small for a variable causes it to underflow*/

#include <iostream>
using namespace std;

int main(){
    // testVar is initilized with the maximum value for a shor 32767
    short testVar = 32767;

    // display the testVar
    cout << testVar << endl;

    // add 1 to make it overflow
    testVar += 1;
    cout << testVar << endl; // output is -32768 the lowest value of a short variable

    // subtract 1 from the etstVar to make it underflow
    testVar -= 1;
    cout << testVar << endl; // output is 32767 the highest value of a short variable.

    return 0;
}