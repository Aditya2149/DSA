#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int i = 0;         // Pointer for 0
    int j = nums.size() - 1;  // Pointer for 2
    int current = 0;     // Current pointer

    while (current <= j) {
        if (nums[current] == 0) {
            swap(nums[i], nums[current]);
            i++;
            current++;
        } else if (nums[current] == 2) {
            swap(nums[current], nums[j]);
            j--;
        } else {
            current++;
        }
    }
}

int main() {
    vector<int> nums = {0,2,2,1,0,1,1,0,2};
    sortColors(nums);

    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
