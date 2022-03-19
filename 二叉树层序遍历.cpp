struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
vector<int> solution(TreeNode *root)
	{
		vector<int> result;     
        if (root == NULL)             //判断根节点是否为空
        {
    	   return result;
        }
        queue<Treenode*> q; 
        q.push(root);
        while(!q.empty())
        {
	      TreeNode *p = q.top();
         result.push(p->val);          //读取节点的值
         q.pop();
         if(p->left != NULL)           //压入节点的左子节点
         {
            q.push(p->left);
         }
 	      if(p->right != NULL)          ////压入节点的右子节点
         {
            q.push(p->right);
         }
   }