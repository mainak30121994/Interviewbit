int Solution::removeElement(vector<int> &arr, int b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len=arr.size();
    int j=-1;
    for(int i=0;i<len;i++)
    {
        if(arr[i]!=b)
        {
            arr[++j]=arr[i];
        }
    }
    // for(int i=0;i<=j;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    // cout<<"j+1="<<j+1<<endl;
    return j+1;
    
    
}
