//search for closed parentheses
#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "({{{{}}}))";
      
    int length = s.size();

    cout < length;

    if (length % 2 != 0)
    {
        return false;

    }

    //create a 2d array
    char list[length][length];

    //fill in the 2d array
    for (int x = 0; x < length; x++)
    {
        list[s[x]]['-'];
    }

    //print out the 2d array
    for (int x = 0; x < length; x++)
    {
        cout << list[x][x];
    }
    
    /*

    cout << "\n";

    int pairCount = 0;

    char charIndex;
    char charNeeded;
    int relCount;

    //search for duplicate
    for (int i = 0; i < length; i++)
    {
        charIndex = s[i];

        

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

        cout << "charIndex" << i << " = " << charIndex << "\n";

        relCount = 1;
        
        for (int j = i+1; j < length; j++)
        {
            
            cout << "charFound" << j << " = " << s[j] << "\n";
            cout << "pairCount " << pairCount << "\n";

            if (charNeeded == s[j] && relCount % 2 == 0)
            {
                cout << "Pair exist " << charIndex << charNeeded << " " << i << ", " << j << "\n\n";
                pairCount = pairCount + 2;
                charNeeded = '?';
                break;
            }
            relCount++;
        }

    }

    if (pairCount == length)
    {
        cout << "Valid parentheses \n" << pairCount;
        return true;
    }
    else 
    {   
        cout << "Not valid parentheses \n" << pairCount;
        return false;
    }
    
    */

    return 0;
        
}
