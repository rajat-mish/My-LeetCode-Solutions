class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>v;
        if(k==1)return nums;
        int n=nums.size();

        for(int i=0;i<n;i++){
            while(dq.size()>0 && nums[i]>nums[dq.back()])dq.pop_back();
            dq.push_back(i);
            int j=i-k+1 ;//start of window
            while(dq.front()<j)dq.pop_front();
            if(i>=k-1)v.push_back(nums[dq.front()]);
        }
return v;
    }
};
