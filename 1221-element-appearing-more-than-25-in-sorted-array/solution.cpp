class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int s=arr.size();
        int n=s*0.25;
               
        for(int i=0;i<s;i++){
            int count=0;
            for(int j=i;j<s;j++){
                        if(arr[i]==arr[j]){
                            count++;
                        }
            }
            if(count>n){
                return arr[i];
            }
        }
        return 1;
    }
};
