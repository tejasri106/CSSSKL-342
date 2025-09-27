#include <iostream>
using namespace std;


int myRoundingFunction(float value) {
    int wholeNum = static_cast<int>(value); 
    float decimalPart = value - wholeNum;
    if (value >= 0) {
        if(decimalPart >= 0.5) {
            return wholeNum + 1;
        } else {
            return wholeNum;
        }
    } else {
        if (decimalPart <= -0.5) {
            return wholeNum + 1;
        } else {
            return wholeNum;
        }
    }
}

int main() {
    int rounded = myRoundingFunction(0.58);
    cout << "Float: 0.58 " << "Rounded: " << rounded << endl;
}