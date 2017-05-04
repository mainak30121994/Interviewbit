/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool myfunction (Interval i,Interval j)
{ 
    return i.start<j.start;
}
vector<Interval> Solution::merge(vector<Interval> &arr) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len=arr.size();
    vector<Interval> result;
    sort(arr.begin(), arr.end(), myfunction);
    
    Interval temp=arr[0];
    for(int i=1;i<len;i++)
    {
        if(temp.end < arr[i].start)
        {
            result.push_back(temp);
            temp=arr[i];
        }
        else if(temp.end == arr[i].start)
        {
            temp.end=arr[i].end;
        }
        else if(temp.start<=arr[i].start && arr[i].start<=temp.end)
        {
            if(temp.end<=arr[i].end)
            {
                temp.end=arr[i].end;
            }
            else {
                temp.end=temp.end;
            }
        }
    }
    result.push_back(temp);
    
    
    // for(int i=0;i<result.size();i++)
    // {
    //     cout<<result[i].start<<" "<<result[i].end<<endl;
        
    // }
    
    return result;
}
