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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* temp=head;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        if(n==count){
            return head->next;
        }
        ListNode* v=head;
        int newc=count-n;
        int c=0;
        while(c<newc-1){
            c++;
            v=v->next;
        }
        v->next=v->next->next;
        return head;

        
    }
};