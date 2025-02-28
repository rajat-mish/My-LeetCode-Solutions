class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int low=0,high=arr.size()-1;
        int count=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==mid+1){
                low=mid+1;
            }
            else if(arr[mid]>mid+1){
         count=arr[mid]-mid-1;
         low=mid+1;
            }
        }
        if(count==0){
            return arr[arr.size()-1]+k;
        }
       if(count>=k){

        int c=0;
        for(int i=1;i<=arr[arr.size()-1];i++){

           if(mp.find(i)==mp.end()){
                c++;
           }
            if(c==k)return i;
        }
       }
      return arr[arr.size()-1]+k-count;
    }
};
