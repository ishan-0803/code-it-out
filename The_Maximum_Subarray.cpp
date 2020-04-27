// Complete the maxSubarray function below.
vector<int> maxSubarray(vector<int> arr) {
    vector<int> res;
    int ans=0,sum=0,sum2=0,f=0,ans2=-1e5;
    for(int x : arr) 
    {
        if(x>=0)    f=1;
        ans2=max(ans2,x);
    }   
    if(f){
    for(int x : arr)
    {
        if(sum2+x>=0)   sum2+=x;
        else    sum2=0;
        if(x>0)     sum+=x;
        else    sum=0;
        ans=max(ans,sum);
        ans=max(ans,sum2);
    }
    res.push_back(ans);
    ans=0;sum=0;
    for(int x : arr)
    {
        if(x>0) sum+=x;
    }
    res.push_back(sum);
    }
    else
    {
        res.push_back(ans2);
        res.push_back(ans2);
    }
    return res;
}