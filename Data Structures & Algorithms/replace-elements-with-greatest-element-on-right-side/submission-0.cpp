class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            int mx=arr[i+1];
            for(int j=i+1;j<n;j++){
                if(mx<arr[j]){
                    mx=arr[j];
                }
            }
            arr[i]=mx;
        }
        arr[n-1]=-1;
        return arr;
    }
};