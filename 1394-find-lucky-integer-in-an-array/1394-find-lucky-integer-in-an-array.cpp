class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        int a=-1;
        for(int i:arr){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.first==i.second){
                a=max(a,i.first);
            }
        }
        return a;;
        
    }
};