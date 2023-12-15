class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>v(k); //store the answer

        if(x<arr[0]){
            for(int i=0;i<k;i++){
                v[i]=arr[i];
            }
            return v;
        }

        if(x>arr[arr.size()-1]){
            int i=arr.size()-1;
        int j=k-1;
        while(j>=0){
            v[j]=arr[i];
            i--;
            j--;
        }
        //sort(v.begin(),v.end());
        return v;
        }
        int l=0;
        int h=arr.size()-1;
        int m=-1;
        int t=0; //representing current index of answer
        bool flag=false;  //element is present or not
        while(l<=h){
             m=l+(h-l)/2;

            if(arr[m]==x){ flag=true;
            v[t]=arr[m];
            t++;
               break;

                
            }
            else if(arr[m]>x){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        int lb=h;
        int ub=l;

        if(flag==true){
            lb=m-1;
            ub=m+1;
        }

        while(t<k && lb>=0 && ub<arr.size()){
           int d1=abs(x-arr[lb]);
           int d2=abs(x-arr[ub]);
           if(d1<=d2){
               v[t]=arr[lb--];

           }
           else{
               v[t]=arr[ub++];
           }
           t++;
        }
        if(lb<0){
            while(t<k){
                 v[t]=arr[ub++];
                 t++;
            }
        }
        if(ub>=arr.size()){
            while(t<k){
             v[t]=arr[lb--];
             t++;}
        }
        sort(v.begin(),v.end());
        return v;
    }
};
