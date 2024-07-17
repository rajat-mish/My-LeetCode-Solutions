class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                a++;
            }
            else if(nums[i]==1){
                b++;
            }
            else if(nums[i]==2){
                c++;
            }
        }
        int idx=0;
        for(int i=0;i<a;i++){
            nums[idx++]=0;
        }
        for(int i=0;i<b;i++){
            nums[idx++]=1;
        }
        for(int i=0;i<c;i++){
            nums[idx++]=2;
        }
    }
};
