//#include <iostream>
//using namespace std;
//long long func1(long long a, long long b)  // 最大公约数(最简)
//{
//    if(b == 0)
//        return abs(a);
//    return func1(b, a % b);
//}
//void print(long long a, long long b)
//{
//    if (b == 0) {
//        cout << "Inf";
//        return;
//    }
//    bool flag = ((a < 0 && b > 0) || (a > 0 && b < 0));
//    a = abs(a), b = abs(b);
//    long long x = a / b;
//    cout << (flag ? "(-" : "");
//    if (x != 0) cout << x;
//    if (a % b == 0) {
//        if (flag) cout << ")";
//        return;
//    }
//    if (x != 0) cout << " ";
//    a -= x * b;
//    long long t = func1(a, b);
//    cout << a / t << "/" << b / t;
//    if (flag) cout << ")";
//}
//int main()
//{
//    long long a1 = 0, b1 = 0, a2 = 0, b2 = 0;
//    scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
//    print(a1,b1); cout << " + "; print(a2,b2); cout << " = "; print(a1 * b2 + a2 * b1,b1 * b2); cout << endl;
//    print(a1,b1); cout << " - "; print(a2,b2); cout << " = "; print(a1 * b2 - a2 * b1,b1 * b2); cout << endl;
//    print(a1,b1); cout << " * "; print(a2,b2); cout << " = "; print(a1 * a2 , b1 * b2);cout << endl;
//    return 0;
//}
// 删除给出链表中的重复元素（链表中元素从小到大有序），使链表中的所有元素都只出现一次
//struct ListNode {
//    int val;
//    struct ListNode *next;
//};
//
//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        // write code here
//        ListNode* first = head;
//        ListNode* cur = head->next;
//        //int count = 0;
//        while(cur != nullptr)
//        {
//            ListNode* next = cur->next;
//
//            if(cur->val == first->val)
//            {
//                //count++;
//                next = next->next;
//                first->next = next->next;
//            }
//            else
//            {
//                first = cur;
//                next = next->next;
//            }
//            cur = next;
//        }
//        return head;
//    }
//};
//int main()
//{
//    ListNode* lt1 = new ListNode;
//    ListNode* lt2 = new ListNode;
//    ListNode* lt3 = new ListNode;
//    ListNode* lt4 = new ListNode;
//    ListNode* lt5 = new ListNode;
//
//
//    (*lt1).val = 1;
//    lt1->next = nullptr;
//    (*lt2).val = 1;
//    lt2->next = lt1;
//    (*lt3).val = 3;
//    lt3->next = lt2;
//    (*lt4).val = 4;
//    lt4->next = lt3;
//    (*lt5).val = 5;
//    lt5->next = lt4;
//
//    Solution s;
//    ListNode* ret = s.deleteDuplicates(lt5);
//    while(ret)
//    {
//        cout << ret->val << endl;
//        ret = ret->next;
//    }
//    return 0;
//}