int Solution::strStr(const string &haystack, const string &needle) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int lenn=needle.length();
    int lenh=haystack.length();
    if(lenn==0 || lenh==0)
    {
        return -1;
    }
    
    int i=0;
    
    for(;i<=lenh-lenn;i++)
    {
        for(int j=0;j<lenn && haystack[i+j]==needle[j];j++)
        {
            if(j==lenn-1){
                return i;
            }
        }
    }
    return -1;
    
}
