int Solution::climbStairs(int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    if(n<=2){
        return n;
    }
    int a,b;
    a=1;
    b=2;
    for(int i=3;i<=n;i++)
    {
        int temp=a+b;
        a=b;
        b=temp;
    }
    return b;
    
}
