#include <iostream>
#include <cmath>
using namespace std;
double k(const double x, const double y); // прототип
int main()
{
    double p, q;
    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;
    double c = (k(1 + p * q, q * q) + pow(k(p, pow(p, 2)), 2)) / (1 + k(p * q + q * q, p));
    cout << "c = " << c << endl;

    return 0;
}

double k(const double x, const double y) // визначення
{
    return x / (1 + pow(sin(y), 2)) + y / (1 + pow(x, 2));
}