class Solution {
public:
int s(vector<int>& arr,int a,int b){int sum=0;
    for(int i=a;i<=b;i++){
        sum+=arr[i];
    }
    return sum;
}
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }

        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if((j-i+1)%2!=0){
                    sum+=s(arr,i,j);
                }
            }
        }
        return sum;
    }
};
