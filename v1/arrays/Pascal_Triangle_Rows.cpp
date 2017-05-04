vector<vector<int> > Solution::generate(int a) {

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    vector<vector <int> > result;
    vector<int> t;
    if(a==0)
    {
        return result;
    }
    t.push_back(1);
    result.push_back(t);
    for(int i=1;i<a;i++)
    {
        vector<int>temp;
        temp.push_back(1);
        for(int j=0;j<i-1;j++)
        {
            // cout<<"hi"<<endl;
            temp.push_back(result[i-1][j]+result[i-1][j+1]);
        }
        temp.push_back(1);
        result.push_back(temp);
    }
    return result;
}
