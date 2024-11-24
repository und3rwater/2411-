#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

vector<string> readFromFile(const string& filename) {
    vector<string> lines;
    ifstream file(filename);

    if (!file) {
        cout << "no" << filename << endl;
        return lines;
    }

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
//    for (const auto& line : lines) {
//       cout << line << endl;
//    }
    return lines;
}
