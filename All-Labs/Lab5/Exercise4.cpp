#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> scores;

    scores["Alice"] = 90;
    scores["Bob"] = 85;
    scores["Charlie"] = 95;
    scores["David"] = 80;
    scores["Eve"] = 92;

    for (const auto& pair : scores) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    auto result1 = scores.insert({"Alice", 100});
    if (result1.second)
        cout << "Insert done." << endl;
    else
        cout << "Insert failed." << endl;

    auto result2 = scores.insert({"Joey", 100});
    if (result2.second)
        cout << "Insert done." << endl;
    else
        cout << "Insert failed." << endl;

    scores["George"] = 70;  // No runtime error 
    scores["Bob"] = 99;

}