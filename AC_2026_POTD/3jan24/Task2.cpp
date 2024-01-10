class Solution {
public:
    int majorityElement(vector<int>& nums) {
         map<int , int> ans;
          int size = nums.size()/2;
        for(int i=0; i<nums.size();i++){
            ans[nums[i]]++;
        }
       
        for(auto x:ans){
            if(x.second>size){
             return x.first;
            }
        }
        return 0;
    }
};