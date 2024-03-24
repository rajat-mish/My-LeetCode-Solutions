class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
         for(int i=0;i<arr.size();i++){
            if(arr[i]>0){
        arr[i]=arr[i]%k;}
        else{
            arr[i]=((arr[i]%k)+k)%k;
        }
       }
        unordered_map<int,int>m;
       for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
       }
 if(m.find(0)!=m.end()){
    if(m[0]%2!=0)return false;
    m.erase(0);
 }
       for(auto x:m){
        int e=k-x.first;
      
       
        if(m.find(e)==m.end())return false;
        if(m[e]!=m[x.first])return false;
       }
       return true;
    }
};
