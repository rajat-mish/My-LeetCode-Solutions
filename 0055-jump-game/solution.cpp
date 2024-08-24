class Solution {
public:
    bool canJump(vector<int>& arr) {
        int n=arr.size();
         if(n==1){
            return true;
        }
        // Your code here
        if(arr[0] == 0){
            return false;
        }
        
        
        int ladder = arr[0];
        int stairs = arr[0];
        int jumps = 1;
        
        for (int level = 1; level<n;level++){
            if(level == n-1){
                return jumps;
            }
            
            if(level+arr[level]>ladder){
                ladder = level + arr[level];
            }
            
            stairs--;
            if(stairs == 0){
                jumps++;
                
                if(level>=ladder){
                    return false;
                }
                
                stairs = ladder - level;
            }
        }
        if(jumps==-1)return false;
        return true;
    }
};
