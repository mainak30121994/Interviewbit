/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    ListNode* head=NULL;
    ListNode* ptr=head;
    ListNode* ptra=A;
    ListNode* ptrb=B;
    
    if(ptra==NULL && ptrb==NULL)
    {
        return NULL;
    }
    else if(ptra==NULL)
    {
        return ptrb;
    }
    else if(ptrb==NULL)
    {
        return ptra;
    }
    
    if(ptra->val<ptrb->val)
    {
        ptr=ptra;
        head=ptr;
        ptra=ptra->next;
    }
    else{
        ptr=ptrb;
        head=ptr;
        ptrb=ptrb->next;
    }
    // cout<<"loll"<<endl;
    
    while(ptra!= NULL && ptrb!=NULL)
    {
        if(ptra->val<ptrb->val)
        {
            ptr->next=ptra;
            ptr=ptra;
            ptra=ptra->next;
        }
        else{
            ptr->next=ptrb;
            ptr=ptrb;
            ptrb=ptrb->next;
        }
    }
    // cout<<"ptr "<<ptr->val<<endl;
    if(ptra==NULL)
    {
        ptr->next=ptrb;
    }
    else if(ptrb==NULL)
    {
        ptr->next=ptra;
    }
    
    return head;
    
    
}
