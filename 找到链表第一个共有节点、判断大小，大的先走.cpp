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
        int getsize(ListNode* pHead);
        int size1 = getsize(pHead1);
        int size2 = getsize(pHead2);
        int n;
        ListNode* longHead = nullptr;
        ListNode* shortHead = nullptr;
        if(size1 >= size2){
            longHead = pHead1;
            shortHead = pHead2;
            n = size1 - size2;
        }
        else{
            longHead = pHead2;
            shortHead = pHead1;
            n = size2 - size1;
        }
        for(int i = 0 ; i<n ; i = i + 1){
            longHead = longHead->next;
        }
        while((longHead != nullptr) && (longHead != shortHead)){
            longHead = longHead->next;
            shortHead = shortHead->next;
        }
        return longHead;
    }
};
int getsize(ListNode* pHead){
    int size = 0;
    while(pHead != nullptr){
    size=size+1;
    pHead = pHead->next;
    }
    return size;
}