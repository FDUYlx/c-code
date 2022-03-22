/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead) {
        if(!pHead) return pHead;
        Recreate(pHead);
        Set_random(pHead);
        return Get_out(pHead);
    }
    void Recreate(RandomListNode* pHead) {
        RandomListNode* read = pHead;
        while(read != nullptr){
            RandomListNode* tmp = new RandomListNode (read -> label);
            tmp -> next = read -> next;
            read -> next = tmp;
            read = tmp -> next;
        }
    }
    void Set_random(RandomListNode* pHead) {
        RandomListNode* read = pHead;
        while(read != nullptr){
            if(read ->random != nullptr){
                read ->next ->random = read ->random ->next;
            }
            read = read ->next ->next;
        }
    }
    RandomListNode* Get_out(RandomListNode* pHead) {
        RandomListNode* read = pHead;
        RandomListNode* newhead = pHead ->next;
        while(read ->next ->next != nullptr){
            RandomListNode* p = read ->next;
            read ->next = read ->next ->next;
            p ->next = p ->next ->next;
            read = read ->next;
        }
        read ->next = nullptr;
        return newhead;
    }
};