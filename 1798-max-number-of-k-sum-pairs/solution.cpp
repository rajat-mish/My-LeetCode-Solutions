class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>m;
       
        int count=0;
       
        for(int x:nums){
            int ele=k-x;
            if(m.find(ele)!=m.end() && m[ele]>0){
                count++;
              m[ele]--;
              
            }
            else{
          m[x]++;
            }
               
            
        }
        return count;
    }
};


