#include<iostream>
using namespace std;
#include<vector>
  struct ListNode {
        int val;
        struct ListNode *next;
        ListNode(int x) :
              val(x), next(NULL) {
        }
  };

//print list in reverse
class Solution {
public:
    vector<int> printListFromTailToHead(struct ListNode* head) {
        vector<int> Reverse;
        //while(head->next != NULL)
        struct ListNode* p = head;
        while(p){
                Reverse.insert(Reverse.begin(),p->val);
                p = p->next;
        };
        return Reverse;
    }
};
int main(){
        ListNode *head = new ListNode(4);
        ListNode *node2 = new ListNode(5);
        head->next = node2;
        ListNode *node3 = new ListNode(6);
        node2->next = node3;

        node3->next = NULL;
        vector<int> vec;
        Solution s1;
        vec = s1.printListFromTailToHead(head);
        vector<int>::iterator it;
        for(it = vec.begin();it != vec.end();it++)
        {
                cout<< *it << endl;
        }
}
