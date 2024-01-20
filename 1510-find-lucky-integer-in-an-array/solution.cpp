class Solution {
public:
    int findLucky(vector<int>& arr) {
        int m=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>m){
                m=arr[i];
            }
        }
        vector<int>v(m+1,0);
        for(int i=0;i<arr.size();i++){
            v[arr[i]]++;
        }
        int m1=INT_MIN;
        bool flag=false;
        for(int i=1;i<v.size();i++){
            if(i==v[i]){
                flag=true;
                m1=max(m1,i);
            }
        }
       if(flag==true) return m1;
       return -1;
    }
};
