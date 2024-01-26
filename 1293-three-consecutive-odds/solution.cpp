class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
       int i=0;
       int j=i+1;
       int k=j+1;
       while(k<arr.size()){
           if(arr[i]%2!=0 && arr[j]%2!=0 && arr[k]%2!=0){
               return true;
           }
           i++;j++;k++;
       } 
       return false;
    }
};
