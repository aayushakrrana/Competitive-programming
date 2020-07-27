/*
20. Valid Parentheses
Easy

5081

221

Add to List

Share
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

Input: "()"
Output: true
Example 2:

Input: "()[]{}"
Output: true
Example 3:

Input: "(]"
Output: false
Example 4:

Input: "([)]"
Output: false
Example 5:

Input: "{[]}"
Output: true
*/


class Solution {
public:
     bool isValid(string s) {
        stack <char> st;
        int len=s.length();
       if(len==0)return true;
        st.push('#');
        st.push(s[0]);
      // cout<<st.top();
        for(int i=1;i<len;i++)
        {
            if(st.top()=='(' && s[i]==')')
            {

            // cout<<"pop1";
                st.pop();}
             else if(st.top()=='[' && s[i]==']')
                st.pop();
            else if(st.top()=='{' && s[i]=='}')
                st.pop();
            else st.push(s[i]);

        }
        if(st.top()=='#')
            return true;
        return false;
    }

};
