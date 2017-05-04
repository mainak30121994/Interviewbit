vector<int> Solution::maxset(vector<int> &arr) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int left,right,resultrange,temprange;
    int resultleft,resultright;
    resultleft=resultright=0;
    long long int tempsum,resultsum;
    vector<int> result;
    vector<int> temp;
    left=right=0;
    resultsum=-1;
    tempsum=0;
    resultrange=0;
    temprange=0;
    int set=0;
    int len=arr.size();
    for(int i=0;i<len;i++)
    {
        if(arr[i]>=0)
        {
            if(set=0)
            {
                left=right=i;
                tempsum=arr[i];
                set=1;
            }
            right=i;
            tempsum+=arr[i];
            temp.push_back(arr[i]);
        }
        else{
            temprange=right-left+1;
            // cout<<"tsum="<<tempsum<<"   rsum="<<resultsum<<endl;
            if((tempsum>resultsum) || (tempsum==resultsum && temprange>resultrange) ||  (tempsum==resultsum && temprange==resultrange && resultleft<left))
            {
                resultrange=temprange;
                resultsum=tempsum;
                result=temp;
                resultleft=left;
                resultright=right;
            }
            set=0;
            tempsum=0;
            
            temp.clear();
        }
    }
    if((tempsum>resultsum) || (tempsum==resultsum && temprange>resultrange) ||  (tempsum==resultsum && temprange==resultrange && resultleft<left))
            {
                resultrange=temprange;
                resultsum=tempsum;
                result=temp;
                resultleft=left;
                resultright=right;
            }
    return result;
    
}
