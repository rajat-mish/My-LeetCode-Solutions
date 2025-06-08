class Solution {
public:
    bool canMakeEqual(vector<int>& nums, int k) {
        int count=0,c=0;
        int n=nums.size();
        bool f1=true,f2=true;
        for(auto ele:nums){
            if(ele<0)count++;
            else c++;
        }
        vector<int>temp=nums;
        int p=k;
     
          
               for(int i=0;i<n-1;i++){
                  if(p>0){
                      if(p==0)break;
                     
                       if(temp[i]>=0){
                           
                       temp[i]*=-1;
                       temp[i+1]*=-1;
                       p=p-1;
                   }
                  }
                   else break;
               }
        

      
           
           for(auto ele:temp){
               cout<<"ffa"<<endl;
               if(ele>0)f1=false;
              
           }
       
    
                 
               for(int i=0;i<n-1;i++){
                 
                  if(k>0){
                      if(k==0)break;
                     
                       if(nums[i]<0){
                          
                       nums[i]*=-1;
                       nums[i+1]*=-1;
                       k=k-1;
                   }
                  }
                   else break;
               }
                   
          // if(k>0 && nums[n-1]<0)nums[n-1]=1;
           for(auto ele:nums){
               if(ele<0) f2=false;
              
        }
        
            return f1||f2;
        
    }
};
