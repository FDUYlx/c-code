/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};*/
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        stack<ListNode*> p1;
        stack<ListNode*> p2;
        if(pHead1 == nullptr || pHead2 == nullptr){
            cout << "List is empty" << endl;
            return 0;
        }
        while(pHead1 != nullptr){
            p1.push(pHead1);
            pHead1 =pHead1 -> next;
        }
        while(pHead2 != nullptr){
            p2.push(pHead2);
            pHead2 =pHead2 -> next;
        }
        ListNode* Find = nullptr;
        if(p1.top() == p2.top()){
            while(!p1.empty() && !p2.empty() && (p1.top() == p2.top())){
                Find = p1.top();
                p1.pop();
                p2.pop();
            }
        }
        else{
            cout << "No same" << endl;
            return 0;
        }
        return Find;
    }
};
