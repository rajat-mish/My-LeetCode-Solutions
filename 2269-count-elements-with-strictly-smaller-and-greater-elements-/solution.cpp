class Solution {
public:
    int countElements(vector<int>& a) {
        int x=*min_element(a.begin(), a.end());
        int y=*max_element(a.begin(), a.end());
        int count=0;
       for(int i=0;i<a.size();i++){
           if(a[i]==x || a[i]==y){
               count++;
           }
       }
       return a.size()-count;
       
    }
};
