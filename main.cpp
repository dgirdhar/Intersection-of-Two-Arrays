class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> tempMap;
        
        for (int i = 0; i < nums1.size(); ++i) {
            tempMap[nums1[i]] = 1;    
        }
        
        for (int i = 0; i < nums2.size(); ++i) {
            if (tempMap[nums2[i]] == 1) {
                res.push_back(nums2[i]);
                tempMap[nums2[i]] = 0;
            }
        }
        
        return res;
    }
};
