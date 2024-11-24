#include <iostream>
#include <string>
#include <vector>

using namespace std;


void display(const vector<string>& lines) {
    for (const auto& line : lines) {
        cout << line << endl;
    }
}
