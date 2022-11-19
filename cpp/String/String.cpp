#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
    char c;

    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;

    c = b[0];
    b[0] = a[0];
    a[0] = c;

    cout << a << " " << b;

    return 0;
}