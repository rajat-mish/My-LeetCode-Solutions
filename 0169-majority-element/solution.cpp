class Solution {
public:
//Boyer-Moore Voting Algorithm
    int majorityElement(vector<int>& nums) {
        int c=0;
        int e=0;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                c=1;
                e=nums[i];
            }
            else if(e==nums[i])c++;
            else{
                c--;
            }
        }
        return e;
    }
};
