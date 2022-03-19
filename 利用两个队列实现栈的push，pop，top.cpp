class Solution
{
public:
    void push(int node) {
        queue1.push(node);
    }

    int pop() {
        if (queue1.empty())
      {
      	cout << "This stack is empty, no top item!" << endl;
        return -1;
      }
      	while(queue1.size()>1){
        	queue2.push(queue1.front());
          queue1.pop();
        }
        queue1.pop();
        queue1=queue2;
        while(!queue2.empty()){
        	queue2.pop();
        }    
      }
    
    int top() {
    //判断是否为空
    	if (queue1.empty)
      {
      	cout << "This stack is empty, no top item!" << endl;
        return -1;
      }
      while(queue1.size()>1){
        	queue2.push(queue1.front());
          queue1.pop();
        }
    	int a = queue1.front();
      queue2.push(queue1.front());
      queue1=queue2;
      while(!queue2.empty()){
        queue2.pop();
        } 
      return a;
    }

private:
    queue<int> queue1;
    queue<int> queue2;
};