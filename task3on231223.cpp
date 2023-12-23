#include<iostream>
#include<ctime>
using namespace std;
int main() {
    struct tm tm;
    string s;
    cout << "time(h:m:s) - ";
    cin >> s;
    if (strptime(s.c_str(), "%H:%M:%S", &tm))
        cout << "time is valid";
    else
        cout << "time is invalid";
}