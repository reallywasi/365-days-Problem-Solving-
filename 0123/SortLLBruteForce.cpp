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
    ListNode* sortList(ListNode* head) {
        ListNode* temp= head;
        int size=1;

        while(temp)
        {
            temp=temp->next;
            size++;
        }
        temp=head;
        int arr[size];
int i=0;

        while(temp!=NULL)
        {
            arr[i]=temp->val;
            temp=temp->next;
            i++;

        }
        sort(arr,arr+i);
        temp=head;
        i=0;

        while(temp!=NULL)
        {
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};
