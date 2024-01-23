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




    bool isPalindrome(ListNode* head) {
      




 
ListNode* slow= head;
ListNode* fast=head;
while(fast && fast->next)
{
    slow=slow->next;
    fast=fast->next->next;
}

  ListNode* temp=slow;
    ListNode* fwd=NULL;
ListNode* curr=slow;
ListNode* prev=NULL;

while(temp)
{
    fwd=temp->next;
    temp->next=prev;
prev=temp;
temp=fwd;
}

temp=head;
ListNode* temp2=prev;

while(temp && temp2)
{
    if(temp->val !=temp2->val)
    {
        return false;

    }
    temp=temp->next;
    temp2=temp2->next;
}
return true;

    }
};
