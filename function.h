#include <iostream>
#include "string"
#include "fstream"
#include "vector"

using namespace std;

vector<string> Parcer(string &source, char &replacement) {
    vector<string> result;
    ifstream file;
    file.open(source);
    string temp;
    while (getline(file, temp)) {
        for (int i = 0; i < temp.length() - 1; ++i) {
            if (temp[i] >= 65 && temp[i] <= 90) {
                continue;
            } else if (temp[i] >= 97 && temp[i] <= 122) {
                continue;
            } else {
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