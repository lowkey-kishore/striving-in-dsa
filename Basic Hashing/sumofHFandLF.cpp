class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {

        map<int,int>mpp;
        for(int i=0; i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int low=mpp.begin()->second;
        int high=0;
        for(auto &pair: mpp){
            if(pair.second>high) high=pair.second;
            if(pair.second<low) low=pair.second;

        }
        return low+high;


        


    }
};
