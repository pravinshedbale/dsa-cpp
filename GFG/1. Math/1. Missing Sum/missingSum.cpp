class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sum = 0;
        int targetSum = n*(n+1)/2;
        
        for(int n:array) {
            sum+=n;
        }
        return targetSum-sum;
    }
};