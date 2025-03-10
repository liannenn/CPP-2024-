#include <iostream>
#include <limits>
#include <algorithm>
#include <unordered_map>
using namespace std;

void a(int*& b, int c);
void d(int* e, int f);
double g(int* h, int i);
int j(int* k, int* l);
int m(int* n, int o);
int* p(int* q, int r);

int main() {
    int s;

    do {
        cout << "\n------Menu------\n";

        cout << "   0) Exit\n";
        cout << "   1) Test Scores\n";
        cout << "   2) Pointer Rewrite\n";
        cout << "   3) Mode Function\n";
        cout << "   4) Element Shifter\n";
        cout << "\nChoice << ";
        cin >> s;

        switch (s) {
        case 1: {
            int t;
            cout << "Enter the amount of test scores: ";
            cin >> t;
            while (t <= 0) {
                cout << "The amount of scores must be greater than 0. Please try again: ";
                cin >> t;
            }

            int* u = nullptr;
            a(u, t);
            d(u, t);
            cout << "\nSorted test scores:\n";
            for (int v = 0; v < t; v++) {
                cout << u[v] << " ";
            }

            double w = g(u, t);
            cout << "\n\nAverage score (w/ the dropped lowest score): " << w << endl;
            delete[] u;
            break;
        }
        case 2: {
            int x = 5, y = 3;
            cout << "Before calling j, x = " << x << ", y = " << y << endl;
            int z = j(&x, &y);
            cout << "After calling j, x = " << x << ", y = " << y << endl;
            cout << "Result of the function: " << z << endl;
            break;
        }
        case 3: {
            int a[] = { 1, 2, 3, 4, 4, 5, 6, 7 };
            int b = sizeof(a) / sizeof(a[0]);

            int* c = a;
            int d = m(c, b);

            if (d != -1) {
                cout << "The mode of the array is: " << d << endl;
            }
            else {
                cout << "There is no mode in the array." << endl;
            }
            break;
        }
        case 4: {
            int e[] = { 1, 2, 3, 4, 5 };
            int f = sizeof(e) / sizeof(e[0]);

            int* g = p(e, f);

            cout << "Og Array: ";
            for (int h = 0; h < f; h++) {
                cout << e[h] << " ";
            }
            cout << endl;

            cout << "Shifted Array: ";
            for (int i = 0; i < f + 1; i++) {
                cout << g[i] << " ";
            }
            cout << endl;

            delete[] g;
            break;
        }
        case 0:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid option, please try again (0-4).\n";
        }

    } while (s != 0);

    return 0;
}

void a(int*& b, int c) {
    b = new int[c];
    for (int d = 0; d < c; d++) {
        do {
            cout << "Enter score " << d + 1 << ": ";
            cin >> b[d];
            if (b[d] < 0) {
                cout << "Score cannot be negative. Please try again.\n";
            }
        } while (b[d] < 0);
    }
}

void d(int* e, int f) {
    sort(e, e + f);
}

double g(int* h, int i) {
    int j = h[0];
    int k = 0;

    for (int l = 0; l < i; l++) {
        if (h[l] < j) {
            j = h[l];
        }
        k += h[l];
    }

    k -= j;
    return static_cast<double>(k) / (i - 1);
}

int j(int* x, int* y) {
    int z = *x;
    *x = *y * 10;
    *y = z * 10;
    return *x + *y;
}

int m(int* n, int o) {
    unordered_map<int, int> p;

    for (int q = 0; q < o; q++) {
        p[*(n + q)]++;
    }

    int r = -1;
    int s = 0;

    for (auto& t : p) {
        if (t.second > s) {
            s = t.second;
            r = t.first;
        }
    }

    return s > 1 ? r : -1;
}

int* p(int* q, int r) {
    int* s = new int[r + 1];

    s[0] = 0;

    for (int t = 0; t < r; t++) {
        s[t + 1] = q[t];
    }

    return s;
}
