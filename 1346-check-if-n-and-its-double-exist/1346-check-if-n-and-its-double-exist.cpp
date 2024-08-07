class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for (int i=0; i<arr.size(); i++){
            int low=i+1; int high= arr.size()-1;
            if (arr[i]<0){
                while (low<= high){
                int mid= low+ (high-low)/2;
                if (arr[i] == arr[mid]*2)return true;
                else if (arr[i] < arr[mid]*2){
                    high= mid-1;
                }
                else low= mid+1;
                }
            }
            else{
                while (low<= high){
                    int mid= low+ (high-low)/2;
                    if (arr[i]*2 == arr[mid]) {return true;}
                    else if (arr[i]*2 < arr[mid]){
                        high= mid-1;
                    }
                    else low= mid+1;
                }
            }
        }
        return false;
    }
};