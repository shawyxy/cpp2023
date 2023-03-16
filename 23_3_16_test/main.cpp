//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string str, sub;
//
//    while(cin >> str >> sub)
//    {
//        int count = 0;
//        size_t pos = str.find(sub);
//        while (pos != std::string::npos)
//        {
//            count++;
//            pos = str.find(sub, pos + sub.length());
//        }
//        cout << count << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int func(int n)
//{
//    if (n <= 0)
//        return 0;
//    int a = 0, b = 1, sum = 1;
//    for (int i = 2; i <= n; i++)
//    {
//        int tmp = a + b;
//        a = b;
//        b = tmp;
//        sum += b;
//    }
//    return sum;
//}
//
//int main()
//{
//    int n = 0, m = 0;
//    cin >> n >> m;
//    cout << func(m + 1) - func(n - 1) << endl;
//
//    return 0;
//}
//#include <iostream>
//
//using namespace std;
//int main()
//{
//    int from = 0, to = 0;
//    while (cin >> from >> to)
//    {
//        int a = 0, b = 1, sum = 0;
//        for (int i = 1; i <= to; i++)
//        {
//            int temp = a + b;
//            a = b;
//            b = temp;
//            if (i >= from) sum += a;
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}

#include <iostream>
using namespace std;
int func(int n)
{
    if(n == 0)
        return 0;

    int sum = 1;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++)
    {
        int tmp = a + b;
        a = b;
        b = tmp;
        sum += b;
    }
    return sum;
}

int main()
{
    int n = 0, m = 0;
    while(cin >> n >> m)
    {
        cout << func(m) - func(n - 1) << endl;
    }

    return 0;
}