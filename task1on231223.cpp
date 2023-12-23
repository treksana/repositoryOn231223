#include<iostream>
using namespace std;
long double fact(int n) {
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (n > 0)
        return n * fact(n - 1);
}
int main() {
    int n;
    cout << "n= ";
    cin >> n;
    cout << "!n= " << fact(n);
}