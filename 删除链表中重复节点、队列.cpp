/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead) {
        if((pHead == nullptr) || (pHead ->next == nullptr)) return pHead;
        queue<ListNode*> node;
        ListNode* tmp = pHead;
        if(pHead ->val != pHead ->next ->val) node.push(pHead);
        while(tmp ->next ->next  != nullptr){
            if((tmp ->val != tmp ->next ->val) && (tmp ->next ->val != tmp ->next ->next ->val)) node.push(tmp ->next);
            tmp = tmp ->next;
        }
        if(tmp ->val != tmp->next ->val) node.push(tmp ->next);
        if(node.empty()) return nullptr;
        ListNode* head = node.front();
        while(!node.empty()){
            tmp = node.front();
            node.pop();
            if(node.empty()) break;
            tmp ->next = node.front();
        }
        tmp ->next = nullptr;
        return head;
    }
};