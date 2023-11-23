#include <iostream>

using namespace std;

int main() {
    float Tf, Tc;
    // Из Фаренгейта в Цельсия.
    cout << "Tf = "; cin >> Tf;
    Tc = (Tf - 32) * 5 / 9;
    cout << "Tc = " << Tc << endl;
    // Из Цельсия в Фаренгейт.
    cout << "Tc = "; cin >> Tc;
    Tf = Tc * 9 / 5 + 32;
    cout << "Tf = " << Tf << endl;
    return 0;
}