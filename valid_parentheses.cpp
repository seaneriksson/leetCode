//search for closed parentheses
#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <char> stack;
    int len = s.size();

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            stack.push(s[i]);
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if(stack.empty())
                return false;
            else if(s[i] == ')' && stack.top() != '(')
                return false;
            else if(s[i] == ']' && stack.top() != '[')
                return false;
            else if(s[i] == '}' && stack.top() != '{')
                return false;
            else
                stack.pop();
        }
    }
    
    if(stack.empty())
    {
        cout << "valid \n";
        return true;
    }
    else
    {
        cout << "not valid \n";
        return false;
    }
    

    return 0;
        
}
