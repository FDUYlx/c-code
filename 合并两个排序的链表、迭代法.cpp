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
        ListNode *Headpre = new ListNode(-1);
        ListNode *cur = Headpre;
        while(pHead1 && pHead2){
            if(pHead1->val <= pHead2->val){
                cur->next = pHead1;
                pHead1 = pHead1->next;
            }
            else{
                cur->next = pHead2;
                pHead2 = pHead2->next;
            }
            cur = cur->next;
        }
        if(pHead1){                                                cur->next = pHead1 ? pHead1 : pHead2;
            cur->next = pHead1;
        }
        else{
            cur->next = pHead2;
        }
        return Headpre->next;
    }
};