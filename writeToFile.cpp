#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void writeToFile(const string& filename, const vector<string>& lines) {
    ofstream file(filename);

    for (const auto& line : lines) {
        file << line << endl;
    }
    file.close();
}
