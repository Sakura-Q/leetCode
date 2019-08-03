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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* s=new ListNode(-1);
        ListNode* head=s;
        int sum=0;
        int flag=0;
        ListNode* p=l1;
        ListNode* q=l2;
        while(p!=NULL||q!=NULL){
            sum=0;
            if(p!=NULL){
                sum+=p->val;
                p=p->next;
            }
            if(q!=NULL){
                sum+=q->val;
                q=q->next;
            }
            if(flag)
                sum+=flag;
            flag=sum>=10?1:0;
            head->next=new ListNode(sum%10);
           head=head->next;
        }
        if(flag==1){
            head->next=new ListNode(1);
        }
        return s->next;   
    }
};