//#include <iostream>
//using namespace std;
//
//int isLeap(int year)
//{
//    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//int getWeekday(int year, int month, int day)
//{
//    if (month == 1 || month == 2)
//    {
//        month += 12;
//        year--;
//    }
//    int c = year / 100;
//    year = year % 100;
//    int w = (c / 4) - 2 * c + year + (year / 4) + (13 * (month + 1)) / 5 + day - 1;
//    w = (w % 7 + 7) % 7;
//    if (w == 0) w = 7;
//    return w;
//}
//
//int main()
//{
//    int year = 0;
//    while (cin >> year)
//    {
//        // 元旦
//        cout << year << "-01-01" << endl;
//
//        // 马丁·路德·金纪念日
//        int wday = getWeekday(year, 1, 1);
//        int day = wday == 1 ? 15 : (22 - wday + 1);
//        cout << year << "-01-";
//        if (day < 10) cout << "0";
//        cout << day << endl;
//
//        // 总统节
//        wday = getWeekday(year, 2, 1);
//        day = wday == 1 ? 15 : (22 - wday);
//        cout << year << "-02-";
//        if (day < 10) cout << "0";
//        cout << day << endl;
//
//        // 阵亡将士纪念日
//        wday = getWeekday(year, 5, 31);
//        day = wday == 1 ? 25 : (31 - wday + (wday == 0 ? -6 : 2));
//        cout << year << "-05-";
//        if (day < 10) cout<<"0";
//        cout<< day<<endl;
//
//        // 美国国庆
//        cout<<year<<"-07-04"<<endl;
//
//        // 劳动节
//        wday=getWeekday(year,9,1);
//        day=wday==1?1:(9-wday + 4);
//        cout<<year<<"-09-";
//        if(day<10)cout<<"0";
//        cout<<day<<endl;
//
//        // 感恩节
//        wday=getWeekday(year,11,1);
//        day=wday==4?22:(29-wday);
//        cout<<year<<"-11-";
//        if(day<10)cout<<"0";
//        cout<<day<<endl;
//
//        // 圣诞节
//        cout<<year<<"-12-25"<<endl << endl;
//    }
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void Print(int& a, vector<int>& factors)
//{
//    for (int i = 0; i < factors.size(); i++)
//    {
//        if (i != 0) cout << " * ";
//        cout << factors[i];
//    }
//    cout << endl;
//}
//int main()
//{
//    int a = 0;
//    vector<int> factors;
//    while (cin >> a)
//    {
//        int aa = a;
//        cout << a << " = ";
//        factors.clear();
//        for (int i = 2; i * i <= a; i++)
//        {
//            while (a % i == 0)
//            {
//                factors.push_back(i);
//                a /= i;
//            }
//        }
//        if (a > 1)
//            factors.push_back(a);
//        Print(aa, factors);
//    }
//    return 0;
//}
