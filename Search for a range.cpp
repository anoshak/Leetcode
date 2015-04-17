class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        int low =0,high = n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(A[mid] == target)
            {
                int start = mid,end=mid;
                while(A[start] == target && start>=low)
                    start--;
                start++;
                while(A[end] == target && end<=high)
                    end++;
                end--;
                vector<int> res;
                res.push_back(start);
                res.push_back(end);
                return res;
            }
            else if(target<A[mid])
                high = mid-1;
            else low = mid+1;
        }
        vector<int> res;
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
};