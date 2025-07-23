class Solution {
public:
int count=0;
void merge(vector<int>&arr,int left,int mid,int right){


 int j=mid+1;
 for(int i=left;i<=mid;i++){
    while(j<=right && (long long)arr[i]>2LL*arr[j])j++;
    count+=(j-(mid+1));
 }


    int n1=mid-left+1;
    int n2=right-mid;

    vector<int>L(n1);
    vector<int>R(n2);

    for(int i=0;i<n1;i++){
       L[i]= arr[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=arr[mid+1+i];
    }
    int k=left;
    int i=0;j=0;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i++];

        }
        else{
            arr[k]=R[j++];
        }
        k++;
    }
    while(i<n1){
        arr[k++]=L[i++];
    }
    while(j<n2)arr[k++]=R[j++];
}

void merges(vector<int>&nums,int i,int j){
    if(i>=j)return;

    int mid=(i+j)/2;
    merges(nums,i,mid);
    merges(nums,mid+1,j);
    merge(nums,i,mid,j);
}
    int reversePairs(vector<int>& nums) {
        merges(nums,0,nums.size()-1);
        return count;
    }
};
