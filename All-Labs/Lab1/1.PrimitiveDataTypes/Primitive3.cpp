#include <iostream>
using namespace std;

int main() {
    cout << "Float: 0.58 " << "Rounded: " << myRoundingFunction(0.58) << endl;
}

int myRoundingFunction(float value) {
    int returnValue;
    int wholeNum = (int) value; 
    int decimalPart = value - wholeNum;
    if ((value >= 0 && decimalPart >= 0.5) || (value <= 0 && decimalPart >= 0.5)) {
        returnValue = wholeNum + 1;
    } else {
        returnValue = wholeNum;
    }

    return returnValue;
}
