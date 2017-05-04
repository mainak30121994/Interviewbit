int Solution::minimumTotal(vector<vector<int> > &m) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int r=m.size();
    if(r==0)
    {
        return 0;
    }
    if(r==1)
    {
        return m[0][0];
    }
    
    for(int i=1;i<r;i++)
    {
        m[i][0]+=m[i-1][0];
        m[i][i]+=m[i-1][i-1];
        for(int j=1;j<i;j++)
        {
            m[i][j]+=m[i-1][j-1]<m[i-1][j]?m[i-1][j-1]:m[i-1][j];
        }
        // for(int k=0;k<=i;k++)
        // {
        //     cout<<m[i][k]<<" ";
        // }
        // cout<<endl;
    }
    int min=m[r-1][0];
    for(int i=1;i<r;i++)
    {
        if(m[r-1][i]<min)
        {
            min=m[r-1][i];
        }
    }
    return min;
}
