/*
7. Reverse Integer
Easy

3371

5317

Add to List

Share
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [-231,  231 - 1].
 For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 */
 
 class Solution {
public:
    int reverse(int x) {
        bool neg=false;
         long int y,sum=0;
        if(x<0)
        {
        neg=true;    
            x=abs(x);
        }
        while(x!=0)
        {   
            y=x%10;
            x=x/10;
            sum=sum*10+y;
        }
        if(sum>=-2147483648 && sum<=2147483648 )
            
        {
            if(neg==true)
            {
                return sum*-1;
            }
            else
            {
                return sum;
            }
        }
        else
            return 0;
    }
};
