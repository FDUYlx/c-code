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
        unordered_set<ListNode*> set;
        ListNode* cur = pHead;
        while(cur) {
            if (set.count(cur)) {
                return cur;
            } 
            else {
                set.insert(cur);
            }
            cur = cur->next;
        }
        return nullptr;
    }
};