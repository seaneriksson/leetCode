//search for duplicate
#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<char> list = {'{', '{', '(', '}', '}', '}', '[', ']', '{', ')'};

	int length = list.size();

    if (length % 2 != 0)
    {
        return false;

    }


	//perform sort
	sort(list.begin(), list.end());


 	//print out sort
    cout << "Sorted \n";
    for (auto x : list)
        cout << x << " ";

    cout << "\n";

    int count = 0;

    char charIndex;
    char charNeeded;


    //search for duplicate
    for (int i = 0; i < length; i++)
    {
        charIndex = list[i];

        cout << "charIndex = " << charIndex << "\n";

        if (charIndex == '(')
        {
            charNeeded = ')';
        }

        if (charIndex == '[')
        {
            charNeeded = ']';
        }

        if (charIndex == '{')
        {
            charNeeded = '}';
        }

        cout << "charNeeded = " << charNeeded << "\n";

        
        for (int j = i + 1; j < length; j++)
        {
            if (list[j] == charNeeded)
            {
                cout << "Pair found " << charIndex << charNeeded << "\n";
                count = count + 2;
                charNeeded = '?';
                break;
            }
        }
    

    }

    if (count == length)
    {
        cout << "Valid parentheses \n";
        return true;
    }
    else 
    {   
        cout << "Not valid parentheses \n";
        return false;
    }


	return 0;
}