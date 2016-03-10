#include<iostream>
using namespace std;
#include<stack>
//栈实现队列
class Solution
{
public:
    void push(int node) {
       stack1.push(node);
    }

    int pop() {
        int iRet = 0;
        if(stack2.empty())
        {
                while(!stack1.empty())//空则入栈
                {
                        int iTemp = stack1.top();
                        stack1.pop();
                        stack2.push(iTemp);
                }

        }
        if(!stack2.empty())//非空出栈
        {
                int iRet = stack2.top();
                stack2.pop();
                return iRet;
        }

        return iRet;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};


int main(){
        Solution s1;
        s1.push(1);
        s1.push(2);
        s1.push(3);
        cout << s1.pop() << endl;
        cout << s1.pop() << endl;
        s1.push(4);
        cout << s1.pop() << endl;
        s1.push(5);
        cout << s1.pop() << endl;
        cout << s1.pop() << endl;



}
