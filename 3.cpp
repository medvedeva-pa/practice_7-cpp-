#include <iostream>
#include <string>
#include <clocale>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    string line;

    ifstream fin("practice.txt");
    int n;
    cout << "Enter the number of strings: \n";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        getline(fin, line);
        {
            cout << line << endl;
        }
    }

    fin.close();

    return 0;
}
