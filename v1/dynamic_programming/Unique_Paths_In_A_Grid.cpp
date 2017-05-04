int Solution::uniquePathsWithObstacles(vector<vector<int> > &m) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int r=m.size();
    int c;
    if(r>0)
    {
        c=m[0].size();
    }
    if(m[r-1][c-1]==1 || m[0][0]==1)
    {
        return 0;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            
            if(m[i][j]==1)
            {
                m[i][j]=0;
            }
            else if(i==0 && j==0)
            {
                m[i][j]=1;
            }
            else{
                int pre1,pre2;
                pre1=i-1<0? 0: m[i-1][j];
                pre2=j-1<0? 0: m[i][j-1];
                m[i][j]=pre1+pre2;
            }
        }
    }
    return m[r-1][c-1];
}
