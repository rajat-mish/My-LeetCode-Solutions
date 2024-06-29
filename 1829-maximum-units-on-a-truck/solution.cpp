//make a custom comparator which will sort the boxTypes based on units

bool cmp(vector<int>&a,vector<int>&b){
    return a[1]>b[1];
}


class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxType, int truckSize) {
      
            sort(boxType.begin(),boxType.end(),cmp);
            int profit=0;
              for(int i=0;i<boxType.size();i++){
                if(boxType[i][0]<=truckSize){
                    profit+=(boxType[i][1])*(boxType[i][0]);
                    truckSize-=boxType[i][0];
                }
                else{
                    profit+=boxType[i][1]*truckSize;
                    truckSize=0;
                }
               
              }

              return profit;
        
    }
};
