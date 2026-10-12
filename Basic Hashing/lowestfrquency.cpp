class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxfreq=0;
        for(auto pair:mpp){
            if(pair.second>maxfreq){
                maxfreq=pair.second;

            }


        }
        int secmax=0;
        int key=0;
        for(auto pair:mpp){
            if(pair.second<maxfreq && pair.second>secmax){
                secmax=pair.second;
                key=pair.first;

            }
        }
        if(secmax==0) return -1;
        else return key;
        

    
    }
};