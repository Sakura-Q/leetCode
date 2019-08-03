class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> m_nums=nums;
        vector<int> s;
        int length=m_nums.size();
        for(int i=0;i<length;i++){
            int j=i+1;
            for(;j<length;j++){
                if((m_nums[i]+m_nums[j])==target){
                    s.push_back(i);
                    s.push_back(j);
                    break;
                }
            }  
        }
       
        return s;
    }
    
};