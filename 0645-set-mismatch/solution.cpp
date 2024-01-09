class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        vector<int>v;
        int n=arr.size();
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
            v.push_back(i+1);
        }
    }
    return v;
    }
};
