class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        if(meetings.empty())return days;
        int n=meetings.size();
        sort(meetings.begin(),meetings.end());
        int count=0;
        count+=meetings[0][0]-1;
       
       
        int end=meetings[0][1];
        for(int i=1;i<n;i++){
          if(meetings[i][0]<=end){
            end=max(end,meetings[i][1]);
          }
          else{
            count+=meetings[i][0]-end-1;
            end=meetings[i][1];
          }
        }
     count+=days-end;
        
       return count;

    }
};







