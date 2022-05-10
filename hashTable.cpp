//unordered map
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
	vector<int> nums = {2,3,4,5,1,2,8};

	unordered_map<int, int> hashTable;

	int length = nums.size();

	//create hash table
	
	for (int i = 0; i < length; i++)
	{
		hashTable[i] = nums[i];
	}

	//search hash table for duplicate

	for (int i = 0; i < length; i ++)
	{
		for (auto x : hashTable)
		if (nums[i] == x.second)
		{
			cout << "duplicate found " << nums[i] << "\n";
			break;
		}


	}
	

	return 0;
}