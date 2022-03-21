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
        if((pHead == nullptr) || (k == 0))         //如果输入空指针或k=0
            return nullptr;
        ListNode* pfast = pHead;
        ListNode* pslow = pHead;
        for(int i = 0 ; i<k-1 ;++i){
            pfast = pfast ->next;
            if(pfast == nullptr){
                cout << "no enough in list" << endl;
                return nullptr;
            }
        }
        while(pfast ->next != nullptr){
            pslow = pslow ->next;
            pfast = pfast ->next;
        }
        return pslow;
    }
};