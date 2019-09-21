class Solution {
public:
vector<vector<int>> out;

vector<int> tmp;

void result(int idx, vector<int>& candidates, int target)
{
    if (target <= 0)
    {
        if (target == 0)
        {
            out.push_back(tmp);
        }
        return;
    }
    for (int i = idx; i < candidates.size(); i++)
    {
        tmp.push_back(candidates[i]);
        result(i, candidates, target - candidates[i]);
        tmp.pop_back();

    }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target)
{
    result(0, candidates, target);
    return out;
}
};