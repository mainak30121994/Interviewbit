string Solution::longestCommonPrefix(vector<string> &arr) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    
    int len=arr.size();
    if(len==0)
    {
        return "";
    }
    
    string pre=arr[0];
    int index=arr[0].length();
    for(int i=1;i<len;i++)
    {
        int j=0;
        for(;j<=arr[i].length() && arr[i][j]==pre[j];j++){}
        if(j<index){
            index=j;
        }
    }
    return pre.substr(0,index);
    
    
    
}
