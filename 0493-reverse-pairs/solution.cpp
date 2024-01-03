class Solution {
public:
int ans=0;
void merge(vector<int>&a,int l,int m,int h){
    int i=l;
    int j=m+1;

    while(i<=m && j<=h){
        if((long long )a[i]>(long long)2*a[j]){
            ans+=m-i+1;
            j++;
        }
        else{
            i++;
        }
    }

    vector<int>b;
    i=l; j=m+1;
    while(i<=m && j<=h){
        if(a[i]>a[j]){
            b.push_back(a[j++]);
        }
        else{
            b.push_back(a[i++]);
        }
    }
    while(i<=m){
         b.push_back(a[i++]);
    }

    while(j<=h){
         b.push_back(a[j++]);
    }

    for(int i=l;i<=h;i++){
        a[i]=b[i-l];
    }


}

void mergeS(vector<int>&a, int l, int h)
{ if(l==h)return;
    int mid;
    if (l < h)
    {
       // mid = floor((l + (h)) / 2);
       int mid=(l+h)/2;
        mergeS(a, l, mid);
        mergeS(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}
    int reversePairs(vector<int>& nums) {
       mergeS(nums,0,nums.size()-1);
       return ans;
    }
};
