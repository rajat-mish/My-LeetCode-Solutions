class Solution {
public:
    int subarraySum(vector<int>& nums) {
        vector<int>v=nums;
        for(int i=1;i<v.size();i++){
            v[i]+=v[i-1];
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
            sum+=v[i];
        }
        cout<<"insum "<<sum<<endl;
        for(int i=0;i<nums.size();i++){
            if((i-nums[i])>0){
                cout<<nums[i]<<endl;
                cout<<"i "<<i<<endl;
              
                    sum-=v[(i-nums[i])-1];
              
                cout<<"sum "<<sum<<endl;
            }
        }
        return sum;
    }
};
