/*
 * Driver for simple int Square class.
 *
 * Author: Kelvin Sung
 * Date: Oct 2018
 */

#include <iostream>
#include "Square.h"

using namespace std;

template <typename T>
void MySwap(T &s1, T &s2) {
    Square t = s1;
    s1 = s2;
    s2 = t;
}

template <typename T>
void MyBubbleSort(T *data, int size) {
    for (int i = 0; i<size; i++) {
        for (int j = 0; j<size-1-i; j++) {
            if (data[j] < data[j+1])
                MySwap(data[j], data[j+1]);
        }
    }
}

template <typename T>
void printArray(string msg, T *data, int size) {
    cout << msg << endl;
    for (int i = 0; i<size; i++) {
        cout <<  data[i] << " ";
    }
    cout << endl;
}


int main(int argc, char** argv)
{
    Square<int> s1, s2;

    s1.setSize(5);
    s2.setSize(3);

    cout << "S1 is: " << s1 << endl;
    cout << "S2 is: " << s2 << endl;

    if (s1 < s2) 
        cout << "s1 is smaller" << endl;
    else 
        cout << "s2 is smaller" << endl;

    s1 = s2;
    cout << "after assignment" << endl;
    cout << "s1 is:" << s1 << endl;
    cout << "s2 is:" << s2 << endl;
    
    // do bubble sort
    int  num[10] = {10, 9, 8, 1, 0, 7, 20, 14, 2, 4};
    Square<int>* sArray[10];  // call initialize by default constructors
    for (int i = 0; i<10; i++) {
        sArray[i]->setSize(num[i]);
    }
    printArray("Array before sorting:", sArray, 10);
    MyBubbleSort(sArray, 10);
    printArray("Array after sorting:", sArray, 10);

    // tests after template
    int num2[5] = {10, 3, 8, 1, 5};
    Square<int>* sArray2[5];
    for (int i = 0; i < 5; i++) {
        sArray2[i] = new Square<int>();
        sArray2[i]->setSize(num2[i]);
    }
    printArray("Squares before sort:", sArray, 5);
    MyBubbleSort(sArray2, 5);
    printArray("Squares after sort:", sArray, 5);

    int size = 10; 
    int num[10] = {10, 9, 8, 1, 0, 7, 20, 14, 2, 4};
    Square<int>* sArray3 = new Square<int>[size];
    for (int i = 0; i < size; i++) {
        sArray3[i].setSize(num[i]);
    }

    printArray("Array before sort:", sArray3, size);
    MyBubbleSort(sArray3, size);
    printArray("Array after sort:", sArray3, size);

    delete[] sArray3;

    int size2 = 10; 
    int num2[10] = {10, 9, 8, 1, 0, 7, 20, 14, 2, 4};
    Square<float>* sArray4 = new Square<float>[5];
    for (int i = 0; i < size2; i++) {
        sArray3[i].setSize(num[i]);
    }
    printArray("Array before sort:", sArray3, size);
    MyBubbleSort(sArray, size);
    printArray("Array after sort:", sArray3, size);

    delete[] sArray4;

}
