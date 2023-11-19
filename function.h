#include <iostream>
#include "string"
#include "fstream"
#include "vector"

using namespace std;

vector<string> Parcer(string &source, char &replacement, char &delimiter, char &delimiter1) {
    vector<string> result;
    ifstream file;
    file.open(source);
    string temp;
    while (getline(file, temp)) {
        for (int i = 0; i < temp.length() - 1; ++i) {
            if (temp[i] == delimiter || temp[i] == delimiter1) {
                temp[i] = replacement;
            }
        }
        result.push_back(temp);
    }
    file.close();
    return result;
}

void Rewrite(string &path, vector<string> &text) {
    ofstream file;
    file.open(path);
    for (const string &item: text) {
        file << item << endl;
    }
    file.close();
}