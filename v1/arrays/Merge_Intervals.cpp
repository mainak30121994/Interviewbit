/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newint) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len=intervals.size();
    bool flag=false;
    vector<Interval> result;
    
    if(len==0){
        result.push_back(newint);
        return result;
    }
    
    int i=0;
    while(i<len && intervals[i].end<newint.start)
    {
        result.push_back(intervals[i++]);
    }
    if(i==len)
    {
        result.push_back(newint);
        return result;
    }
    
    if(intervals[i].start>newint.end)
    {
        result.push_back(newint);
        while(i<len)
        {
            result.push_back(intervals[i++]);
        }
        return result;
    }
    
    Interval temp=newint;
    temp.start=min(intervals[i].start,newint.start);
   
        while(i<len && intervals[i].end<newint.end)
        {
            i++;
        }
        if(i==len)
        {
            temp.end=max(newint.end,intervals[len-1].end);
            result.push_back(temp);
            return result;
        }
        
        if(intervals[i].start<=newint.end)
        {
            temp.end=intervals[i].end;
            i++;
        }
        else{
            temp.end=newint.end;
        }
        
        
        result.push_back(temp);
        
        while(i<len)
        {
            result.push_back(intervals[i++]);
        }
        
    return result;
    
    
    
}
