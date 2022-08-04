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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
//CODE HERE 
if(head==NULL ||head->next==NULL){
    return head;
}
ListNode* dummy=new ListNode(-1);
dummy->next=head;
ListNode* it=dummy;
ListNode*prev=NULL;
for(int i=0;i<left;i++){
    prev=it;
    it=it->next;
}
ListNode* itr=it;
ListNode* prevr=prev;
for(int i=left;i<=right;i++){
    ListNode* forward=itr->next;
    itr->next=prevr;
    prevr=itr;
    itr=forward;

}
prev->next=prevr;
it->next=itr;
return dummy->next;
}
    
};