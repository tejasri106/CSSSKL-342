#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst;
    lst.insert(lst.end(), {1,3,5,7,9});
    for (int x : {2,4,6,8,10})
        lst.push_front(x);

    cout << "First: " << lst.front() << " Last: " << lst.back() << endl;

    lst.remove(3);  

    lst.sort();

    cout << "After sort: ";
    for (int n : lst) cout << n << " ";
    cout << endl;

    lst.remove_if([](int n) { return n % 2 != 0; });

    cout << "After removing odds: ";
    for (int n : lst) cout << n << " ";
    cout << endl;

    return 0; 
}