struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* pNode = pHead;
        ListNode* pPre = nullptr;
        ListNode* pNext = nullptr;
        ListNode* Newhead = nullptr;
        if(pNode == nullptr){
            cout << "List is empty" <<endl;
            return nullptr;
        }
        while(pNode != nullptr){
            pNext = pNode->next;
            if(pNext == nullptr){
                Newhead = pNode;
            }
            pNode->next=pPre;
            pPre = pNode;
            pNode = pNext;
        }
        return Newhead;
    }
};