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
        
        ListNode* temp=head;
        
        vector<int> a;
        while(temp)
        {
            a.push_back(temp->val);
            temp=temp->next;
        }
        
        int n=a.size()-1;
        for(int i=0;i<=n;i++)
        {
            if(a[i]!=a[n-i]) 
                return false;
        }
       
        return true;
    }
};