int Solution::maxProfit(const vector<int> &arr) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(arr.size()<=1)
    {
        return 0;
    }
    int min=arr[0];
    int profit=0;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>min && arr[i]-min>profit){
            profit=arr[i]-min;
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return profit;
}
