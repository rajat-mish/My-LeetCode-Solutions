class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        sort(deck.begin(),deck.end());
        queue<int>q;
          vector<int>v(n);

          for(int i=0;i<n;i++){
            q.push(i);
          }

          for(int i=0;i<n;i++){
            int idx=q.front();
            q.pop();
            q.push(q.front());
            q.pop();
            v[idx]=deck[i];
          }
          return v;
    }
};
