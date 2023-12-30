class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        vector<int>s;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    v.push_back(i);
                    break;
                }
            }

        }

        for(int i=0;i<nums2.size();i++){
            for(int j=0;j<nums1.size();j++){
                 if(nums2[i]==nums1[j]){
                    s.push_back(i);
                    break;
                }
            }
        }
        ans.push_back(v.size());
        ans.push_back(s.size());
        return ans;
    }
};
