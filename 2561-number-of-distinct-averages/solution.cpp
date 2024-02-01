class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        vector<double>v;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            double x=(double)nums[i];
            double y=(double)nums[j];
            v.push_back((x+y)/2.0);
            i++;j--;
        }
        int count=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
         if(v[i]!=v[i+1]){
             count++;
         }
        }
        return count+1;
    }
};
