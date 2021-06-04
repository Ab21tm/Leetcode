class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> pool1;
        unordered_set<int> pool2;
        
        int largest_num = INT_MIN;
        for(int i=0; i<nums1.size(); i++){
            pool1.emplace(nums1[i]);
        }
        
        for(int j=0; j<nums2.size(); j++){
            if(pool1.count(nums2[j])>0){
                pool2.emplace(nums2[j]);
            }
        }
        vector<int> result;
        
        for(auto it = pool2.begin(); it!=pool2.end(); ++it){
            result.push_back(*it);
        }
        
        return result;
    }
};