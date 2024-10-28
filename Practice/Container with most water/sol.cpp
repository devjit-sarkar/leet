class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1;
        int currentVol = 0, maxVol = 0;
        while(left < right)
        {
            currentVol = (right-left)*min(height[left],height[right]);
            maxVol = max(currentVol, maxVol);
            if(height[left] > height[right])
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return maxVol;
    }
};