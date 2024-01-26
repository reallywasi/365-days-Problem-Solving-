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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* dn=dummy;
ListNode* t1=list1;
ListNode* t2=list2;
ListNode* x=NULL;


while(t1!=NULL && t2!=NULL)
{
    if(t1->val < t2->val){
        dn->next=t1;
        t1=t1->next;
    }
else{
    dn->next=t2;
    t2=t2->next;

}
dn=dn->next;
}
 if (t1 != nullptr) {
        dn->next = t1;
    } else {
        dn->next = t2;
    }

return dummy->next;

    }
};
