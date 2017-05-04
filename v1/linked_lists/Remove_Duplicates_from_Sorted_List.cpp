/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* L) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    if(L==NULL)
    {
        return L;
    }
    
    ListNode* prev=L;
    ListNode* p=L->next;
    while(p!=NULL)
    {
        if(p->val==prev->val)
        {
            prev->next=p->next;
            p=p->next;
        }
        else{
            prev=p;
        }
    }
    
    return L;
}
