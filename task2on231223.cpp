#include<iostream>
#include<ctime>
using namespace std;
int main() {
    struct tm tm;
    string s;
    cout << "date(y-m-d) - ";
    cin >> s;
    if (strptime(s.c_str(), "%Y-%m-%d", &tm))
        cout << " date is valid";
    else
        cout << "date is invalid";
}
