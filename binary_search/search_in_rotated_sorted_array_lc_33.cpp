// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int result = -1;
        int l = 0;
        int r = n;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(isBadVersion(mid) == true){
                if(mid==0){
                    result = mid;
                    return mid;
                }
                else{
                    if(isBadVersion(mid-1) == true){
                        r = mid - 1;
                    }
                    else{
                        result = mid;
                        return mid;
                    }
                }
            }
            else{
                l = mid + 1;
            }
        }
        
        return result;
    }
};