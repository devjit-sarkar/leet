class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() == 1)
        {
            if(flowerbed[0] == 0)
                n--;
        }
        else
        {
            for(int i=0; i<flowerbed.size(); i++)
            {
                if(flowerbed[i] == 0)
                {
                    if(i == 0)
                    {
                        if(flowerbed[i+1] == 0)
                        {   
                            flowerbed[0] = 1;
                            n--;
                        }
                    }
                    else if(i == flowerbed.size() - 1)
                    {
                        if(flowerbed[flowerbed.size()-2] == 0)
                        {
                            flowerbed[flowerbed.size() - 1] = 1;
                            n--;
                        }
                    }
                    else
                    {
                        if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0)
                        {
                            flowerbed[i] = 1;
                            n--;
                        }
                    }
                }
                // cout<<flowerbed[i]<<endl;
            }
        }
        // cout<<n<<endl;
        if(n <= 0)
            return true;
        else
            return false;
    }
};