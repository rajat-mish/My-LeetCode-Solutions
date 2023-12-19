class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {vector<int > v;
    sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
      for(int i=0;i<nums2.size();i++){
           if(nums1[0]==nums2[i]){
           v.push_back(nums1[0]);
           break;
       }
      }

        for(int i=1;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                 if(nums1[i]==nums2[j]&&nums1[i-1]!=nums2[j]){
                     v.push_back(nums1[i]);
                     break;
                 }
            }
        }
        return v;
    }
};
