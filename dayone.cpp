#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low =0 , mid = 0, high = n-1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low],nums[mid]);
                mid++; low++;
            } else if (nums [mid] ==1 ) {
                mid++;
            }else {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};


int main () {
   
int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements (only 0, 1, 2): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    obj.sortColors(nums);

    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
}