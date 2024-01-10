class Solution {
public:
long long concat(int a, int b) 
{ 
  
    // Convert both the integers to string 
    string s1 = to_string(a); 
    string s2 = to_string(b); 
  
    // Concatenate both strings 
    string s = s1 + s2; 
  
    // Convert the concatenated string 
    // to integer 
    int c = stoi(s); 
  
    // return the formed integer 
    return c; 
}
    long long findTheArrayConcVal(vector<int>& nums) {
      int i=0,j=nums.size()-1;
    long long   sum=0;
      while(i<j){
          int a=nums[i];
          int b=nums[j];
          
          sum+=concat(a,b);
        
          i++;
          j--;
      }
        if(i==j){
              sum+=nums[i];
          }
      return sum;
    }
};
