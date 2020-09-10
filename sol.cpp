class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
    int n=arr.size();int low = 0, high = n - 1, res1 = -1,res2=-1; 
    while (low <= high) {  
        int mid = (low + high) / 2; 
        if (arr[mid] > x) 
            high = mid - 1; 
        else if (arr[mid] < x) 
            low = mid + 1;  
        else { 
            res1 = mid; 
            high = mid - 1; 
        } 
    } 
         low = 0, high = n - 1; 
    while (low <= high) { 
        int mid = (low + high) / 2; 
        if (arr[mid] > x) 
            high = mid - 1; 
        else if (arr[mid] < x) 
            low = mid + 1; 
        else { 
            res2 = mid; 
            low = mid + 1; 
        } 
    }
        return {res1,res2};
 } 
};
