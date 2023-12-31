#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    while (b!=0) {
        ll r = a%b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a*b/gcd(a, b);
}

int main() {
    ll A, B;
    cin >> A >> B;
    cout << lcm(A, B) << '\n';
    return 0;
}