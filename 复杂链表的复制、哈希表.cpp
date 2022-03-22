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
        if( pHead == nullptr){
            return pHead;
        }
        map<RandomListNode*, RandomListNode*> node;
        RandomListNode* read = pHead;
        while(read != nullptr){
            node[read] = new RandomListNode (read ->label);
            read = read ->next;
        }
        read = pHead;
        while(read){
            node[read] ->next = node[read ->next];
            node[read] ->random = node[read ->random];
            read = read ->next;
        }
        return node[pHead];
    }
};