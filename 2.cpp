#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("my2file.txt");
    if (!fin.is_open()) {
        cout << "fail to open" << endl;
    }
    else {
        cout << "here it is" << endl;
        string str;
        while (!fin.eof()) {
            str = "";
            getline(fin, str);
            cout << str << endl;
        }
    }
    fin.close();
    return 0;
}