class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int>r1,r2;
        for(auto ele:nums){
            
            if(ele%3==1)r1.push_back(ele);
            else if(ele%3==2)r2.push_back(ele);
        }

        int sum=accumulate(nums.begin(),nums.end(),0);
        sort(r1.begin(),r1.end());
        sort(r2.begin(),r2.end());

        if(sum%3==0)return sum;
              int ans=0;
        if(sum%3==1){
            int a,b;
            if(r1.size()>0){
                a=r1[0];
            }
            else a=INT_MAX;

            if(r2.size()>1){
                b=r2[0]+r2[1];
            }
            else b=INT_MAX;
          ans=sum-min(a,b);
        }
        else if(sum%3==2){
             int a,b;
            if(r2.size()>0){
                a=r2[0];
            }
            else a=INT_MAX;

            if(r1.size()>1){
                b=r1[0]+r1[1];
            }
            else b=INT_MAX;
          ans=sum-min(a,b);
        }
        if(ans<0)return 0;
        return ans;
    }
};
