class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sum = 1, c = 2;
        for(int n:array) {
            sum  = sum-n+(c++);
        }
        return sum;
    }
};