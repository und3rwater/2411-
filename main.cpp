#include <iostream>
#include <string>
#include "readFromFile.cpp"
#include "writeToFile.cpp"
#include "display.cpp"


using namespace std;

int main() {
    const string inputFilename = "input.txt";
    const string outputFilename = "output.txt";

    vector<string> lines = readFromFile(inputFilename);

    display(lines);

    writeToFile(outputFilename, lines);

    return 0;
}
