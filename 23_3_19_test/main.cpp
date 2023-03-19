#include <iostream>
using namespace std;
long long func1(long long a, long long b)  // 最大公约数(最简)
{
    if(b == 0)
        return abs(a);
    return func1(b, a % b);
}
void print(long long a, long long b)
{
    if (b == 0) {
        cout << "Inf";
        return;
    }
    bool flag = ((a < 0 && b > 0) || (a > 0 && b < 0));
    a = abs(a), b = abs(b);
    long long x = a / b;
    cout << (flag ? "(-" : "");
    if (x != 0) cout << x;
    if (a % b == 0) {
        if (flag) cout << ")";
        return;
    }
    if (x != 0) cout << " ";
    a -= x * b;
    long long t = func1(a, b);
    cout << a / t << "/" << b / t;
    if (flag) cout << ")";
}
int main()
{
    long long a1 = 0, b1 = 0, a2 = 0, b2 = 0;
    scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
    print(a1,b1); cout << " + "; print(a2,b2); cout << " = "; print(a1 * b2 + a2 * b1,b1 * b2); cout << endl;
    print(a1,b1); cout << " - "; print(a2,b2); cout << " = "; print(a1 * b2 - a2 * b1,b1 * b2); cout << endl;
    print(a1,b1); cout << " * "; print(a2,b2); cout << " = "; print(a1 * a2 , b1 * b2);cout << endl;
    return 0;
}