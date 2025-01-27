class Solution {
public:
    long long minDamage(int power, vector<int>& damage, vector<int>& health) {
        int n=damage.size();
        vector<pair<double,int>>threat(n);
        
        for(int i=0;i<n;i++){
             double timetokill=ceil((double)health[i]/power);
            threat[i]={timetokill/damage[i],i};
        }
        sort(threat.begin(),threat.end());
        long long totaldamage=0;
        long long cumulativedamage=accumulate(damage.begin(),damage.end(),0LL);
        
        for(int i=0;i<n;i++){
                 int idx=threat[i].second;
             int timetokill=ceil((double)health[idx]/power);
            totaldamage+=cumulativedamage*timetokill;
            cumulativedamage-=damage[idx];
        
        }
        return totaldamage;
    }
};
