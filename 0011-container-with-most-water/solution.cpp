class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int n=height.size();
        int i=0,j=n-1;
        while(i<j){
            int water=min(height[i],height[j])*(j-i);
            if(height[i]>height[j])j--;
            else i++;
            maxi=max(maxi,water);
        }
        return maxi;
    }
};
