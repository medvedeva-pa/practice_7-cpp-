#include <iostream>
#include <fstream>
using namespace std;

int main() {
    system("chcp 65001");

    string line;

    ifstream fin("practice.txt");

    while(getline(fin, line))
    {
        cout << line << endl;
    }

    fin.seekg(0,ios_base::end);
    cout << "File size in bytes: " << fin.tellg();

    fin.close();

    return 0;
}
