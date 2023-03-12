#include <iostream>
#include <sstream>
using namespace std;

struct ChatInfo
{
    string _name;
    int _id;
    string _msg;
};
int main()
{
    ChatInfo winfo = { "小明", 2021304, "明天一起自习吧?" };
    // 序列化
    stringstream oss;
    oss << winfo._name << endl;
    oss << winfo._id << endl;
    oss << winfo._msg << endl;

    string str = oss.str();
    cout << str << endl;

    // 反序列化
    ChatInfo rInfo;
    istringstream iss(str);
    iss >> rInfo._name;
    iss >> rInfo._id;
    iss >> rInfo._msg;

    cout << rInfo._name << endl;
    cout << rInfo._id << endl;
    cout << rInfo._msg << endl;


    return 0;
}
