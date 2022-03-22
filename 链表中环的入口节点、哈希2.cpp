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
    ListNode* EntryNodeOfLoop(ListNode* pHead) {
        // 还是用哈希吧
        unordered_set<ListNode*> st;
        ListNode* cur = pHead;
        while(cur) {
            if (st.find(pHead) == st.end()) 
            {
                st.insert(pHead);
                pHead = pHead->next;
            }
            else {
                return pHead;
            }
            cur = cur->next;
        }
        return nullptr;
    }
};