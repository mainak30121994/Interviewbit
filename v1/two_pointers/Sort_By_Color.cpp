void Solution::sortColors(vector<int> &arr) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int len=arr.size();
    int c0,c1,c2;
    c1=c2=c0=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]==0)
        {
            c0++;
        }
        else if(arr[i]==1)
        {
            c1++;
        }
        else{
            c2++;
        }
        
    }
    int i=0;
    while(c0-->0)
    {
        arr[i++]=0;
    }
    while(c1-->0)
    {
        arr[i++]=1;
    }
    while(c2-->0)
    {
        arr[i++]=2;
    }
    
}
