class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int max=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        int b[max+1];
        for(int i=0;i<max+1;i++){
            b[i]=0;
        }

        for(int i=0;i<n;i++){
            b[nums[i]]++;
        }
  int count=0;
        for(int i=0;i<max+1;i++){
            if(b[i]==1){
                return -1;
            }
          
             if(b[i]%3==0){
                count+=b[i]/3;
            }
            // else if((b[i]%3!=0)&&(b[i]%2==0)){
            //     count+=b[i]/2;
            // }
            else if(b[i]%3==2){
                count+=b[i]/3 +1;
            }
            else if(b[i]%3==1){
            //    if(b[i]-3>=2){
            //         b[i]-=3;
            //   count+=b[i]/2 +1;
            //    }
            //    else{
            //        count+=b[i]/2;
            //    }
            count+=b[i]/3 +1;
            }
        }
        return count;
    }
};
