#include<map>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,bool>check;
        ListNode* temp=head;
if(head==NULL || head->next==NULL)
{
    return false;
}
        while(temp)
        {
            if(check[temp]==true)
            {
                return true;

            }
            check[temp]=true;
            temp=temp->next;

        }
        return false;
    }
};
