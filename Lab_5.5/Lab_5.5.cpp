#include <iostream>
#include <iomanip>
using namespace std;

int depth = 0;
int level = 0;

int R(int b, int p, int m)
{
    level++;
    if (level > depth) {
        depth = level;
    }

    int result;
    if (p == 0) {
        result = 1;
    }
    else if (p % 2 == 0) {
        int par = R(b, p / 2, m);
        result = (par * par) % m;
    }
    else {
        result = (b * R(b, p - 1, m)) % m;
    }

    cout << "|" << setw(8) << level << " | "
        << setw(8) << result << " | "
        << setw(8) << depth << "|" << endl;

    level--;
    return result;
}

int main() {
    int b, p, m;

    cout << "b = "; cin >> b;
    cout << "p = "; cin >> p;
    cout << "m = "; cin >> m;

    cout << "--------------------------------" << endl;
    cout << "|" << setw(8) << "Level" << " | "
        << setw(8) << "Result" << " | "
        << setw(8) << "Depth" << "|" << endl;
    cout << "--------------------------------" << endl;

    int result = R(b % m, p, m);

    cout << "--------------------------------" << endl;
    cout << "|" << setw(8) << result << " | "
        << setw(8) << level << " | "
        << setw(8) << depth << "|" << endl;
    cout << "--------------------------------" << endl;

    return 0;
}

