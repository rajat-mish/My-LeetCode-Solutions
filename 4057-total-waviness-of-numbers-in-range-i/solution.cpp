class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int n=num1;n<=num2;n++){
            string temp=to_string(n);
            int cnt=0;
            if(temp.size()<3)continue;
            for(int i=1;i<temp.size()-1;i++){

                if(temp[i]>temp[i-1] && temp[i]>temp[i+1])cnt++;
                else if(temp[i]<temp[i-1] && temp[i]<temp[i+1])cnt++;
            }
            ans+=cnt;

        }
        return ans;
    }
};
