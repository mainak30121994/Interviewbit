
int Solution::diffPossible(vector<int> &arr, int b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len=arr.size();
    if(len<=1)
    {
        return 0;
    }
    // cout<< *(arr.end())<<" -  "<< *(arr.begin()) << endl;
    if( arr[len-1] - arr[0] < b)
    {
        return 0;
    }
    else if(*(arr.end()) - *(arr.begin()) == b)
    {
        return 1;
    }
    // cout<<"hello"<<endl;
    int j=1;
    int i=0;
    while(i!=len-1 )
    {
        int diff=arr[j]-arr[i];
        
        if(i==j)
        {
            // cout<<"i= "<<i<<"  j= "<<j<<endl;
            j++;
            continue;
        }
        if(j>=len)
        {
            return 0;
        }
        // cout<<"i= "<<i<<"  j= "<<j<<"   diff= "<<diff<<endl;
        
        if(diff==b)
        {
            // cout<<"found ya"<<endl;
            return 1;
        }
        
        if(j==len-1 && diff<b)
        {
            return 0;
        }
        
        if(diff<b)
        {
            j++;
        }
        else if(diff>b)
        {
            i++;
        }
        
    }
    return 0;
}
