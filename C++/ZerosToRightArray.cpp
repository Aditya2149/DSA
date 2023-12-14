#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0,1,0,9,0,4,0};
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }

    for(int i:nums)
    cout<<i<<" ";
    return 0;
}