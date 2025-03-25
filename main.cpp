#include <iostream>
using namespace std;

string reverse(string s) {
    if (s.empty()) return s;
    return s.back() + reverse(s.substr(0, s.size() - 1));
}

int main() {
    cout << reverse("hello") << endl;
    return 0;
}
