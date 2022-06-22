bool cmp(string s1,string s2){
    if(s1.size()!=s2.size()) return s1.size()<s2.size();
    return s1<s2;    
}
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),cmp);
        int i = nums.size()-k;
        return nums[i];
    }
};