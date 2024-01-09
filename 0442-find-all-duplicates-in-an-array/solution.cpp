class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n=arr.size();
        vector<int>v;
         int i=0;
    while(i<n){
        int ci=arr[i]-1; //correct index of any element
        if(i==ci || arr[ci]==arr[i]){
            i++;
        }
        else{
            swap(arr[i],arr[ci]);
        }

    }

    for(int i=0;i<n;i++){
      if(arr[i]!=i+1){
       v.push_back(arr[i]);
      }
    }
    return v;
    }
};
