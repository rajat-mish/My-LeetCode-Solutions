class Solution {
public:
    int nextGreaterElement(int n) {
        string str=to_string(n);
        int j=str.size()-2;
        while(j>=0 && str[j]>=str[j+1]){
            j--;
        }
        if(j<0)return -1; // already maximum hai
        int i=str.size()-1;
        while(str[i]<=str[j]){
           
                i--;
            
        }
        swap(str[i],str[j]);
        reverse(str.begin()+j+1,str.end());
        long long result=stoll(str);
        return (result <= INT_MAX) ? (int)result : -1;

    }
};
