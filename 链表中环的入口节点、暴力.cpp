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
        ListNode* meet = MeetNode(pHead);
        if(meet == nullptr){
            cout <<"no huan";
            return nullptr;
        }
        ListNode* tmp =meet;
        int num = 1;
        while(tmp ->next != meet){
            tmp = tmp ->next;
            ++num;
        }
        ListNode* p1 = pHead;
        for(int i =0 ; i < num ; ++i){
            p1 = p1->next;
        }
        ListNode* p2 = pHead;
        while(p1 != p2){
            p1 = p1->next;
            p2 = p2->next;
        }
        return p1;
    }
    ListNode* MeetNode(ListNode* pHead) {
        if((pHead == nullptr) || (pHead -> next == nullptr)){
            cout << "empty list" << endl;
            return nullptr;
        }
        ListNode* pfast = pHead;
        ListNode* pslow = pHead;
        while(pfast->next ->next != nullptr){
            pfast = pfast ->next ->next;
            pslow = pslow ->next;
            if(pfast == pslow){
                return pfast;
            }
        }
        return nullptr;
    }
};