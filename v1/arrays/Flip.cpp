vector<int> Solution::flip(string A) {
    int sum=0;
    int len=A.length();
    int left,right,fl,fr,fsum;
    fsum=0;
    fl=fr=len;
    left=-1;
    right=-1;
    for(int i=0;i<len;i++)
    {
        int val=A[i]=='0'?1:-1;
        right++;
        sum+=val;
        
            
            // cout<<"tsum="<<sum<<endl;
            
            if( (sum>fsum) || (sum==fsum && left<fl && right<fr) )
            {
                // cout<<"update"<<endl;
                fl=left;
                fr=right;
                fsum=sum;
            }
        
        else if(sum<0)
        {
            // cout<<"change"<<endl;
            sum=0;
            left=right=i;
        }
        // cout<<"i="<<i<<"[]="<<val<<" s="<<sum<<" l,r="<<left<<","<<right<<" fs="<<fsum<<" fl,fr="<<fl<<","<<fr<<endl;
    }
    vector<int> solution;
    if(fl!=len && fr!=len){
        solution.push_back(fl+1+1);
        solution.push_back(fr+1);
    }
    return solution;
}
