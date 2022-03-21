/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param pHead ListNode类 
     * @param k int整型 
     * @return ListNode类
     */
    ListNode* FindKthToTail(ListNode* pHead, int k) {
        stack<ListNode*> Node;
        ListNode* tmp = pHead;
        if((pHead == nullptr ) || (k == 0)){
            cout << "no allow" << endl;
            return nullptr;
        }
        while(tmp != nullptr){
            Node.push(tmp);
            tmp = tmp ->next;
        }
        for(int i = 0 ; i < k ; ++i){
            if(Node.empty()){
                cout << "no enough" << endl;
                return nullptr;
            }
            tmp = Node.top();
            Node.pop();
        }
        return tmp;
    }
};