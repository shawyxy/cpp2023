//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string name;
//    while(getline(cin, name))
//    {
//        string key;
//        getline(cin, key);
//        int size = name.size();
//        for(int i = 0;  i < size; i++)
//        {
//            if(name[i] == '\"')// 找到第一个双引号,要找第二个,同时记录名字的长度
//            {
//                int begin = ++i;
//                int NameLen = 0;
//                while(name[i] != '\"') // 找第二个双号
//                {
//                    i++;
//                    NameLen++;
//                }
//                // 找到了
//                if(name.substr(begin, NameLen) == key && i < size)
//                {
//                    cout << "Ignore" << endl;
//                    break;
//                }
//            }
//            else if(name[i] == ',')// 另一种用逗号分隔的名字
//            {
//                int begin = 0;
//                int NameLen = 0;
//                if(i == 0) // 一开始就是字母
//                {
//                    NameLen = 0;
//                    while(name[i] != ',')
//                    {
//                        i++;
//                        NameLen++;
//                    }
//                    // 遇到第一个逗号
//                    if(name.substr(0, NameLen) == key && i < size)
//                    {
//                        cout << "Ignore" << endl;
//                        break;
//                    }
//                }
//                else
//                {
//                    begin = ++i;
//                    NameLen = 0;
//                    while(name[i] != ',')// 找逗号,操作同上
//                    {
//                        i++;
//                        NameLen++;
//                    }
//                    // 找到了
//                    if(name.substr(begin, NameLen) == key && i < size)
//                    {
//                        cout << "Important!" << endl;
//                        break;
//                    }
//                }
//            }
//        }
//    }
//
//    cout << "Important!" << endl;
//    return 0;
//}
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    bool found = false;
    while(getline(cin, name))
    {
        string key;
        getline(cin, key);
        int size = name.size();
        for(int i = 0;  i < size; i++)
        {
            if(name[i] == '\"')// 找到第一个双引号,要找第二个,同时记录名字的长度
            {
                int begin = ++i;
                int NameLen = 0;
                while(name[i] != '\"') // 找第二个双号
                {
                    i++;
                    NameLen++;
                }
                // 找到了
                if(name.substr(begin, NameLen) == key && i < size)
                {
                    cout << "Ignore" << endl;
                    found = true;
                    break;
                }
            }
            else if(name[i] == ',')// 另一种用逗号分隔的名字
            {
                int begin = 0;
                int NameLen = 0;
                if(i == 0) // 一开始就是字母
                {
                    NameLen = 0;
                    while(name[i] != ',')
                    {
                        i++;
                        NameLen++;
                    }
                    // 遇到第一个逗号
                    if(name.substr(begin, NameLen) == key && i < size)
                    {
                        found = true;
                        break;
                    }
                }
                else
                {
                    begin = ++i;
                    NameLen = 0;
                    while(name[i] != ',')// 找逗号,操作同上
                    {
                        i++;
                        NameLen++;
                    }
                    // 找到了
                    if(name.substr(begin, NameLen) == key && i < size)
                    {
                        found = false;
                        break;
                    }
                }
            }
        }
    }
    if(found)
        cout << "Ignore" << endl;
    else
        cout << "Important!" << endl;
    return 0;
}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string s;
//    while (getline(cin, s))
//    {
//        string name;
//        getline(cin, name);
//        bool flag = false;
//        int size = s.size();
//        for (int i = 0; i < size; i++)
//        {
//            if (s[i] == '\"')
//            {
//                int j = i + 1;
//                while (s[j] != '\"')
//                    j++;
//                if (s.substr(i + 1, j - i - 1) == name)
//                    flag = true;
//                i = j + 1;
//            }
//            else if(s[i] != ',')
//            {
//                int j = i + 1;
//                while (s[j] != ',' && j < size)
//                {
//                    j++;
//                }
//                if (s.substr(i, j - i) == name)
//                {
//                    flag = true;
//                }
//                i = j;
//            }
//        }
//        if (flag)
//            cout << "Ignore" << endl;
//        else
//            cout << "Important!" << endl;
//    }
//    return 0;
//}