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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr=head;
        int length=1;
        
        while(curr->next!=NULL){
            curr=curr->next;
            length++;
        }
        
        
        curr=head;
        for(int i=0;i<length/2;i++){
            curr=curr->next;
        }
        
        cout<<curr->val;
        return curr;
    }
        
    
};