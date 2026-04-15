#include<vector>
#include<algorithm>

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size() ;
        if( n < 2){
            return false ; 
        }
        int st = 0 ; 
        int end = n -1 ;
        sort(arr.begin(), arr.end()) ;
        while (st < end ){
            if(arr[st] + arr[end] == target){
                return true ; 
            }
            else if (arr[st] + arr[end] < target){
             st++ ;   
            }
            else {
                end-- ;
            }
        }
        return false ; 
    }
};


