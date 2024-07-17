class Solution {
public:
    int romanToInt(string nums) {
        int ans=0;
        int X=10,I=1,V=5,L=50,C=100,D=500,M=1000;
        unordered_map<char,int>roman={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        for(int i=0;i<nums.size();i++){
          if(i+1 <=nums.size()&& roman[nums[i]]>=roman[nums[i+1]]){
            ans+=roman[nums[i]];
          }
          else{
            ans-=roman[nums[i]];
          }
        }
        return ans;
    }
};
