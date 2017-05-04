int Solution::firstMissingPositive(vector<int> &arr) {
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len=arr.size();
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]<=0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            j++;
        }
    }
    // cout<<"j="<<j<<endl;
    // for(int i=0;i<len;i++)
    // {
    //     cout<<arr[i]<<" ";    
    // }
    // cout<<endl;
    
    // cout<<"h1"<<endl;
    for(int i=j;i<len;i++)
    {
        if(abs(arr[i])<=len-j ){
            // cout<<"m "<<arr[i]<<" "<<abs(arr[i])-1+j<<endl;
            arr[abs(arr[i])-1+j]=-1*abs(arr[abs(arr[i])-1+j]) ;
            
        }
    }
    
    
    // for(int i=0;i<len;i++)
    // {
    //     cout<<arr[i]<<" ";    
    // }
    // cout<<endl;
    
    // cout<<"h2"<<endl;
    int i;
    for(i=j;i<len;i++)
    {
        if(arr[i]>=0)
        {
            break;
        }
    }
    
    // cout<<"end  "<<i<<endl;
    return i-j+1;
    
}
