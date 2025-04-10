class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(0);
        ListNode* res = ans;
        while(list1!=NULL and list2!=NULL)
        {
            if(list1->val <= list2->val)
            {
               
                ans->next = list1;
                
                list1=list1->next;
            }
            else
            {
                
                ans->next = list2;
                list2=list2->next;
            }
            ans = ans->next;
            
        }
        if(list1!=NULL) ans->next = list1;
        if(list2!=NULL) ans->next = list2;
        return res->next;
    }
};