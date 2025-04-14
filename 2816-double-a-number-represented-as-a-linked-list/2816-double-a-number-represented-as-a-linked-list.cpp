
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==NULL||head->next==NULL){return head;}
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forw=head;
        while (curr!=NULL){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        head=reverseList(head);
        ListNode* ans=new ListNode(0);
        ListNode* answer=ans;
        int carry=0,sum;
        while (head!=NULL){
            sum=carry;
            sum+=head->val+head->val;
            head=head->next;
            ans->next=new ListNode(sum%10);
            ans=ans->next;
            carry=sum/10;
        }
        if (carry>0){sum=carry;ans->next=new ListNode(sum%10);}
        answer=reverseList(answer->next);
        return answer;
    }
};