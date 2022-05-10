//search for duplicate
#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> nums = {2,3,4,5,1,2,8};

	int length = nums.size();


	//perform sort
	sort(nums.begin(), nums.end());


 	//print out sort
    cout << "Sorted \n";
    for (auto x : nums)
        cout << x << " ";


    //search for duplicate
    for (int i = 0; i < length; i++)
    {
    	if (nums[i] == nums[i-1])
    	{
    		cout << "\nduplicate found: " << nums[i] << "\n";
    	}

    }


	return 0;
}