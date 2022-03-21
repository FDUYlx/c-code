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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        if(pHead1 == nullptr){
            return pHead2;
        }
        else if(pHead2 == nullptr){
            return pHead1;
        }
        ListNode* Newhead = nullptr;
        if(pHead1->val <= pHead2->val){
            Newhead = pHead1;
            Newhead -> next = Merge(pHead1->next,pHead2);
        }
        else{
            Newhead = pHead2;
            Newhead -> next = Merge(pHead1,pHead2->next);
        }
        return Newhead;
    }
};