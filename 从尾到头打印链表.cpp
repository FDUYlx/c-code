/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> list;
        stack<ListNode*> nodes;
        ListNode* node = head;
        while(node != nullptr){
            nodes.push(node);
            node =node->next;
        }
        while(!nodes.empty()){
            list.push_back(nodes.top()->val);
            nodes.pop();
        }
        return list;
    }
};