class Solution {
public:
    long long int binarySearch(int n){
        int s = 0;
        int e = n;
        int ans;
        long long int mid = s +(e-s)/2;

        while(s<=e){
           long long int square = mid * mid;

            if(square == n){
                return mid;
            }
            else if(square > n){
                e = mid -1;
            }
            else{
                ans = mid;
                s = mid + 1;
            }
            mid = s + ( e - s)/2;
        }
        return ans;
    }
    
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;
        return binarySearch(x);
    }
};
