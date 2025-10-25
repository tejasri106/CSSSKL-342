#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(5);

    for (int &x : v)
        x = (rand() % 50) * 2;


    cout << "Numbers: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    for (int i = 0; i < 5; i++)
        v.push_back((rand() % 50) * 2 + 1);

    sort(v.begin(), v.end());

    cout << "After sorting: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    
    return 0;
}


