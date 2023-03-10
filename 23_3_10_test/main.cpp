#include <iostream>
using namespace std;
//
//int main()
//{
//    std:: cout << "hello world" << std::endl;
//
//    int a = 0;
//    cin >> a;
//    cout << a << endl;
//
//    return 0;
//}
//int main()
//{
//    int a = 0, b = 0;
//    cin >> a;
//    cout << a << endl;
//
//    cin >> b;
//    cout << b << endl;
//    return 0;
//}
//#include <string>
//int main()
//{
//    string str;
//    cin >> str;
//    cout << str;
//    return 0;
//}
//#include <string>
//int main()
//{
//    string str;
//    getline(cin, str);
//    cout << str;
//    return 0;
//}

//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d%d", &a, &b);
//
//    cout << a << endl << b << endl;
//    return 0;
//}
#include <iostream>
using namespace std;

class Point
{
public:
    Point(int x = 0, int y = 0)
        : _x(x)
        , _y(y)
    {}
    friend ostream& operator<<(ostream& os, const Point& p);
private:
    int _x;
    int _y;
};

ostream& operator<<(ostream& os, const Point& p)
{
    os << "(" << p._x << ", " << p._y << ")";
    return os;
}

int main()
{
    Point p(1, 2);
    cout << p << endl;
}