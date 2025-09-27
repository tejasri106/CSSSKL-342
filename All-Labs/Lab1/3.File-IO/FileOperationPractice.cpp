#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;


void readFile(const string& filename) {
    ifstream inFile(filename);
    int num;
    cout << "File name: " << filename << endl;
    while(inFile >> num) {
        cout << num << " ";
    }

    inFile.close();
}

int main(int argc, char* argv[]) {
    readFile("textfile1.txt"); 
    readFile("textfile2.txt");
    readFile("textfile3.txt");
}