class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        bool pair=false;
 for(int i=0;i<n;){
if(bits[i]==1){
    pair=true;
    i+=2;
}
else{
    pair=false;
    i++;
}
 }
 return (pair==false);
    }
};
