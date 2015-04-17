class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        map<int,int> mymap;
        vector<int> result;
        for(int i=0;i<numbers.size();i++)
        {
            if(mymap.find(target-numbers[i])!=mymap.end())
            {
                int index1 = i+1;
                int index2 = mymap[target-numbers[i]];
                if(index1 < index2)
                {
                    result.push_back(index1);
                    result.push_back(index2);
                }
                else
                {
                    result.push_back(index2);
                    result.push_back(index1);
                }
                break;
                
            }
            else mymap[numbers[i]] = i+1;
        }
        return result;
    }
};