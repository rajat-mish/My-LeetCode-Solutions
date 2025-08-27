
class Solution {
  public:
  vector<vector<int>> dp;

  bool fun(int i,int j,string& s1, string& s2, string& s3){
      int k=i+j;
      if(k==s3.size()){
          return (i == s1.size() && j == s2.size());
      }

      if(dp[i][j] != -1) return dp[i][j];

      bool ans = false;

      if(i < s1.size() && k < s3.size() && s1[i] == s3[k]) {
          ans = ans || fun(i+1, j, s1, s2, s3);
      }
      if(j < s2.size() && k < s3.size() && s2[j] == s3[k]) {
          ans = ans || fun(i, j+1,  s1, s2, s3);
      }

      return dp[i][j] = ans;
  }

  bool isInterleave(string& s1, string& s2, string& s3) {
      if(s1.size() + s2.size() != s3.size()) return false;

      dp.resize(s1.size()+1,  vector<int>(s2.size()+1, -1));
      return fun(0,0,s1,s2,s3);
  }
};

