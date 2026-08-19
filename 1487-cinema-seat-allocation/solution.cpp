class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& res) {
        unordered_map<int,pair<unordered_set<int>,int>>mp;
      
        for(int i=0;i<res.size();i++){
              int row=res[i][0];
              int seat=res[i][1];
            if(mp.find(row)==mp.end()){
               
               if(seat==1 || seat==10)continue;

               else if(seat==2 || seat==3 || seat==8 || seat==9){
                mp[row].first.insert(seat);
                mp[row].second=1;
               }
               else{
                mp[row].first.insert(seat);
                mp[row].second=1;
               }
            }
            else{
                // vector<int>temp=mp[row];
                // int prev=temp[0];
                // int poss=temp[1];
                unordered_set<int>prev=mp[row].first;
                int poss=mp[row].second;


              if((seat!=1 && seat!=10)){
                //   if(((prev==2 || prev==3) && (seat==4 || seat==5))||((prev==4 || prev==5) && 
                // seat==2 || seat==3)){
                //    mp[row]={seat,1};
                // }

                // else if(((prev==2 || prev==3) && (seat==8 || seat==9))||((prev==8 || prev==9) && 
                // seat==2 || seat==3)){
                //    mp[row]={seat,1};
                // }

                // else if(((prev==8 || prev==9) && (seat==6 || seat==7))||((prev==6 || prev==7) && 
                // seat==8 || seat==9)){
                //     mp[row]={seat,1};
                // }

                // else if((prev==2 && seat==3) || (prev==3 && seat==2)||(prev==8 && seat==9)||
                // (prev==9 && seat==8)){
                //     mp[row]={seat,1};
                // }

                // else if((prev==4 && seat==5) ||(prev==5 && seat==4)||(prev==6 && seat==7)||
                // (prev==7 && seat==6) ){
                //     mp[row]={seat,poss};
                // }

                // else{
                //     mp[row]={seat,0};
                // }
               
               if(seat==2 || seat ==3){
                for(auto st:prev){
                    if(st==6 || st==7){
                        mp[row].second=0;
                    }
                }
                mp[row].first.insert(seat);
               }
               else if(seat==8 || seat==9){
                   for(auto st:prev){
                    if(st==4 || st==5){
                        mp[row].second=0;
                    }
                }
                mp[row].first.insert(seat);
               }

               else if(seat==4 || seat==5){
                   for(auto st:prev){
                    if(st>=6){
                        mp[row].second=0;
                    }
                }
                mp[row].first.insert(seat);
               }

               else if(seat==6 || seat==7){
                   for(auto st:prev){
                    if(st<=5){
                        mp[row].second=0;
                    }
                }
                mp[row].first.insert(seat);
               }

            //    else{

            //    }

              }


            }
        }
        int ans=0;
        int rem=n-mp.size();
        ans+=rem*2;

        for(auto ele:mp){
            ans+=ele.second.second;
            // cout<<"this seat coming from row "<<ele.first<<", sno "<<ele.second[0]<<endl;
        }
        return ans;

    }
};
