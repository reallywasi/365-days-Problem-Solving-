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
    // ListNode *detectCycle(ListNode *head) {
    //     map<ListNode*,bool>vn;
    //     ListNode* temp=head;
    //     if(temp->next==NULL)
    //     {
    //         return temp->next;
    //     }
    //     while(temp)
    //     {

    //         if(vn[temp]==true)
    //         {
    //             return temp;
    //         }
    //         vn[temp]=true;
    //         temp=temp->next;


    //     }
    //     return head;
    // }
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, bool> vn;
        ListNode* temp = head;

        while (temp) {
            if (vn[temp] == true) {
                return temp;
            }
            vn[temp] = true;
            temp = temp->next;
        }

        return NULL;  // return NULL when no cycle is detected
    }
};
