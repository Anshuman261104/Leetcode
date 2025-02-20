class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxIndex=-1,n=nums.size(),maxVal=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>maxVal){
                maxVal=nums[i];
                maxIndex=i;
            }
        }
        for(auto x:nums){
            if(x!=maxVal&&(2*x)>maxVal) return -1;
        }
        return maxIndex;
    }
};