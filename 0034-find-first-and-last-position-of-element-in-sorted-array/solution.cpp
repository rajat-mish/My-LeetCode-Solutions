class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) { vector<int>ans;
    bool f=false;

    if(nums.size()==0){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            f=true;
            break;
        }
    }
    if(f==false){
         ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
       int l=0;
    int h=nums.size()-1;
    int res;
    while(l<=h){ //first occur
        int m=l+(h-l)/2;
        if(nums[m]==target){
            res=m;
            h=m-1;
        }
        
       if(nums[m]<target){
        l=m+1;
       }
       if(nums[m]>target){
        h=m-1;
       } 
        } 
        ans.push_back(l);
 //last occur

 int p=0;
    int q=nums.size()-1;
    int rest;
    while(p<=q){
        int mid=p+(q-p)/2;
        if(nums[mid]==target){
            rest=mid;
            p=mid+1;
        }
        if(nums[mid]>target){
            q=mid-1;
        }
        if(nums[mid]<target){
            p=mid+1;
        }
    }
ans.push_back(q);
return ans;
    }
};


