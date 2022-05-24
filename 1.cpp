#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("myfile.txt");
    if (!fout.is_open()) {
        cout << "fail to open" << endl;
    }
    else {
        fout << "here it is";
    }
    fout.close();
    return 0;
}