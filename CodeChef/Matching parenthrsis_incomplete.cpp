
Matching Parenthesis Problem Code: COCA2003

Shaun was given N pairs of parenthesis ( ) by his teacher who gave him a difficult task.The task consists of two steps. First,Shaun should colour all N pairs of parenthesis each with different color but opening and closing bracket of a particular pair should be of same colour. Then,Shaun should report to his teacher the number of ways he can arrange all 2*N brackets such that sequence form is valid. Teacher defined valid sequence by these rules:

Any left parenthesis '(' must have a corresponding right parenthesis ')'.
Any right parenthesis ')' must have a corresponding left parenthesis '('.
Left parenthesis '(' must go before the corresponding right parenthesis ')'.
Note: Shaun could match opening and closing brackets of different colours.

Since number of ways can be large, Shaun would report the answer as modulo 1000000007 (109+7).

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, one integer N.
Output:
For each testcase, output in a single line answer given by Shaun to his teacher modulo 1000000007.

Constraints
1=T=100000
1=N=100000
Sample Input:
   3
   1
   2
   3
Sample Output:
   1
   6
   90
EXPLANATION:
Here numbers from 1 to N have been used to denote parenthesis.A unique number corresponds to a unique pair of parenthesis.

-In the first test case , you can use only one color to color the parenthesis you could arrange it only in one way i.e, 1 1

-In the second test case you can use two colors and the possible ways of arranging it are

1 1 2 2

1 2 2 1

1 2 1 2

2 2 1 1

2 1 1 2

2 1 2 1


