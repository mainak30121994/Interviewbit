vector<int> Solution::getRow(int a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    vector<int> result;
    result.push_back(1);
    for(int i=1;i<=a;i++)
    {
        vector<int>temp;
        temp.push_back(1);
        for(int j=0;j<i-1;j++)
        {
            // cout<<"hi"<<endl;
            temp.push_back(result[j]+result[j+1]);
        }
        temp.push_back(1);
        result=temp;
    }
    return result;
}
