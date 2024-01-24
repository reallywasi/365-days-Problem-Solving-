/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy= new ListNode(-1);
        ListNode* d1=dummy;
        ListNode* t1=l1;
        ListNode* t2=l2;
int carry=0;

        while(t1!=NULL || t2!=NULL)
        {
            int sum =carry;

if(t1!=NULL) 
sum=sum+t1->val;

if(t2!=NULL)
sum=sum+t2->val;

        ListNode* newNode= new ListNode(sum%10);
        carry=sum/10;
        d1->next=newNode;
        d1=d1->next;

if(t1!=NULL) 
t1=t1->next;

if(t2!=NULL)
t2=t2->next;

        }
if(carry)
{
        ListNode* newNode= new ListNode(carry);
d1->next=newNode;
}
    
    return dummy->next;
    }
};
