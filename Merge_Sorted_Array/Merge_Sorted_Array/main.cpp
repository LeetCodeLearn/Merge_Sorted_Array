//
//  main.cpp
//  Merge_Sorted_Array
//
//  Created by 李佳 on 15/11/21.
//  Copyright © 2015年 LiJia. All rights reserved.
//

#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int index1 = m - 1;
        int index2 = n - 1;
        while (index1 >= 0 && index2 >= 0)
            nums1[index1 + index2 + 1] = nums1[index1] > nums2[index2] ? nums1[index1--] : nums2[index2--];
        while (index2 >= 0)
        {
            nums1[index2] = nums2[index2];
            index2--;
        }
    }
};

#include <iostream>

int main(int argc, const char * argv[])
{
    vector<int> nums1 = {1,2,3,6,7,9,1111};
    vector<int> nums2 = {4,5,8,10,222};
    
    Solution sol;

    sol.merge(nums2, (int)nums2.size(), nums1, (int)nums1.size());
    return 0;
}
