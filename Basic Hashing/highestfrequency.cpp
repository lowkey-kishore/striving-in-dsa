class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]+=1;
        }
        int freq=0;
        int resultkey=0;
        for(const auto& pair:mpp){
            if (pair.second>freq){ freq=pair.second;
            resultkey=pair.first;
        }}
        return resultkey;
        

    }
};