class Solution {
public:
    int maxProduct(int A[], int n) {
        if(n==0)
            return 0;
        int max_ending_here = A[0];
        int min_ending_here = A[0];
        int max_so_far = A[0];
        for(int i=1;i<n;i++)
        {
            int temp = max_ending_here;
            if(min_ending_here * A[i] > max_ending_here * A[i])
                max_ending_here = min_ending_here*A[i];
            else max_ending_here = max_ending_here*A[i];
            if(A[i] > max_ending_here)
                max_ending_here = A[i];
            if(max_ending_here > max_so_far)
                max_so_far = max_ending_here;
            if(A[i] * min_ending_here < temp*A[i])
                min_ending_here  = A[i] * min_ending_here;
            else min_ending_here = temp*A[i];
            if(A[i] < min_ending_here)
                min_ending_here = A[i];
        }
        return max_so_far;
    }
};