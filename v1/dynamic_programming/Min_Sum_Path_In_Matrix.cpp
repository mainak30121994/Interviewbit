int Solution::minPathSum(vector<vector<int> > &m) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int r=m.size();
    if(r==0)
    {
        return 0;
    }
    int c=m[0].size();
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 && j==0)
            {
                continue;
            }
            if(i==0)
            {
                m[i][j]+=m[i][j-1];
            }
            else if(j==0)
            {
                m[i][j]+=m[i-1][j];
            }
            else{
                 m[i][j]+=min(m[i-1][j],m[i][j-1]);
            }
           
            // cout<<m[i][j]<<" ";
        }
        // cout<<endl;
    }
    return m[r-1][c-1];
    
}
