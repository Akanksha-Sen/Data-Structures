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
        ListNode* curr=head;
        int count=1;
        
        while(curr->next!=NULL){
            curr=curr->next;
            count++;
        }
        
      if(head->next == NULL && count==1)
          return NULL;
        
        if (n == count) {
            ListNode* new_head = head->next;
            delete head;
            return new_head;
        }
        
        
        curr=head;
        for(int i=1;i<count-n;i++){
            curr=curr->next;
        }
        
        ListNode* del=curr->next;
        curr->next=curr->next->next;
        delete del;
        return head;
        
    }
};