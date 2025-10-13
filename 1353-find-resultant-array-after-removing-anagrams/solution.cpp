class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        //unordered_map<string ,int>mp;
        // for(auto ele:words){
        //     sort(ele.begin(),ele.end());
        //  mp[ele]++;
        // }
         vector<string>ans;
        // int id=0;
        int i=0,j=0;
      while(i<words.size()){
        string temp=words[i];
        ans.push_back(temp);
        sort(temp.begin(),temp.end());
j=i+1;
        while(j<words.size()){
            string t=words[j];
            sort(t.begin(),t.end());
         
            if(temp!=t){
             break;
            }
            j++;
        }
        i=j;
      }
        return ans;
    }
};
