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
     * @param head ListNode类 
     * @param val int整型 
     * @return ListNode类
     */
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode* p0 = nullptr;
        ListNode* p1 = head;
        if(head == nullptr){
            cout << "empty" << endl;
            return 0;
        }
        if(head ->val == val){
            return head->next;
        }
        while(p1 ->val != val){
            p0 = p1;
            p1 = p1 ->next;
            if(p1 == nullptr){
                cout << "not found" << endl;
                return 0;
            }
        }
        p0->next = p1->next;
        return head;
    }
};