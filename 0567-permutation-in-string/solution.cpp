class Solution {
public:
bool match(int arr1[],int arr2[]){
       for(int i=0;i<26;i++){
           if(arr1[i]!=arr2[i])return false;
       }
       return true;
}
    bool checkInclusion(string s1, string s2) {
       int j=s1.size()-1;
       int arr1[26],arr2[26];
       for(auto x:s1){
        arr1[x-'a']++;
       }

     for(int i=0;i<s2.size();i++){
        arr2[s2[i]-'a']++;
        if(i>=j){
            if(match(arr1,arr2))return true;
            arr2[s2[i-j]-'a']--;
        }
     }
     return false;
        
    }
};
