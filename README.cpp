#include <iostream>
#include <cmath>
using namespace std;

double fungsi_f(double x) {
    if (x > 0)
        return 3 * pow(x, 2) + 7 * x - 2;
    else
        return 2 * pow(x, 2) - 5 * x - 4;
}
double fungsi_g(double x) {
    return pow(fungsi_f(x), 2) - sqrt(fungsi_f(x));
}
double fungsi_h(double x) {
    return fungsi_f(x) * fungsi_g(x);
}

int main() {
    char input_lagi;
    do {
        int n;
        cout << "TABEL FUNGSI\n";
        cout << "f(x) = 3x^2 + 7x - 2 jika x > 0\n";
        cout << "     = 2x^2 - 5x - 4 jika x < 0\n";
        cout << "g(x) = (f(x))^2 - sqrt(f(x))\n";
        cout << "h(x) = f(x) * g(x)\n\n";

        cout << "Input banyak data n: ";
        cin >> n;

        double x[n], f[n], g[n], h[n];
        for (int i = 0; i < n; ++i) {
            cout << "Input nilai x ke-" << i + 1 << ": ";
            cin >> x[i];
            f[i] = fungsi_f(x[i]);
            g[i] = fungsi_g(x[i]);
            h[i] = fungsi_h(x[i]);
        }
        cout << "\nNo\tf(x)\tg(x)\th(x)\n";
        for (int i = 0; i < n; ++i) {
            cout << i + 1 << "\t" << f[i] << "\t" << g[i] << "\t" << h[i] << "\n";
        }
        cout << "\nInput nilai x lagi? (Y/N): ";
        cin >> input_lagi;
    } while (input_lagi == 'Y' || input_lagi == 'y');

    return 0;
}
