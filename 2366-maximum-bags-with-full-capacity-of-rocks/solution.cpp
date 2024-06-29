class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>v(capacity.size());
        
        for(int i=0;i<capacity.size();i++){
            v[i]=capacity[i]-rocks[i];
            
        }

       

        sort(v.begin(),v.end());
          int count=0;
        for(int i=0;i<v.size();i++){
            
                if(static_cast<long long>(v[i])<=additionalRocks){
                    
                    count++;
                    additionalRocks-=v[i];
                
            }
            else{
                break;
            }
        }
     
     
        return count;
         


    }
};



