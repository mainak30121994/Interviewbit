vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<int> result;
    int len=A.size();
    int carry=1;
    int limit=-1;
    for(int i=0;i<len;i++)
    {
        
        limit=i;
        if(A[i]!=0)
        {
            
            // limit--;
            break;
        }
    }
    limit=limit<0?0:limit;
    // cout<<"limit="<<limit<<endl;
    for(int i=len-1;i>=limit;i--)
    {
        int sum=A[i]+carry;
        if(sum>9)
        {
            carry=1;
            sum-=10;
        }
        else{
            carry=0;
        }
        result.push_back(sum);
        
    }
    if(carry>0)
    {
        result.push_back(carry);
    }
    vector<int> result2;
    for(int i=result.size()-1;i>=0;i--)
    {
        result2.push_back(result[i]);
    }
    
    return result2;
}
