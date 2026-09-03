class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int sodd=INT_MAX;
        int seven=INT_MAX;
        for(auto ele:nums1){
            if(ele%2==0){
                seven=min(seven,ele);
            }
            else{
                sodd=min(sodd,ele);
            }
        }

        bool alleven=true;
        for(auto ele:nums1){
            if(ele%2==0)continue;
            else{
                if(ele==sodd){
                 alleven=false;
                }
            }
        }

        bool allodd=true;
        for(auto ele:nums1){
            if(ele%2!=0)continue;
            else{
                if(sodd<ele)continue;
                else allodd=false;
            }
        }
        return allodd||alleven;
    }
};
