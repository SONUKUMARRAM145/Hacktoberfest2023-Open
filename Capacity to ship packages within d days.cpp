bool canweplace(vector<int> &stalls,int dist, int k){
    int countcows=1;
    int last=stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-last>=dist){
            countcows++;
            last=stalls[i];
        }
    }if(countcows>=k)return true;
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
int low=1;
int n=stalls.size();
int high=stalls[n-1]-stalls[0];
while(low<=high){
    int mid=(low+high)/2;
    if(canweplace(stalls,mid,k)==true){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return high;
}
