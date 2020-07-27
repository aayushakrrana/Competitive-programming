
Beauty of tree (13pts, 19pts)

Competitive Submissions
You have not attempted this problem.
Last updated: Jul 12 2020, 10:30

Problem
Amadea and Bilva are decorating a rooted tree containing N nodes, labelled from 1 to N. Node 1 is the root of the tree, and all other nodes have a node with a numerically smaller label as their parent.

Amadea and Bilva's decorate the tree as follows:
Amadea picks a node of the tree uniformly at random and paints it. Then, she travels up the tree painting every A-th node until she reaches the root.
Bilva picks a node of the tree uniformly at random and paints it. Then, she travels up the tree painting every B-th node until she reaches the root.

The beauty of the tree is equal to the number of nodes painted at least once by either Amadea or Bilva. Note that even if they both paint a node, it only counts once.

What is the expected beauty of the tree?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the three integers N, A and B. The second line contains N-1 integers. The i-th integer is the parent of node i+1.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the expected beauty of the tree.

y will be considered correct if it is within an absolute or relative error of 10-6 of the correct answer. See the FAQ for an explanation of what that means, and what formats of real numbers we accept.

Limits
Memory limit: 1GB.
1 ≤ T ≤ 100.
1 ≤ A ≤ N.
1 ≤ B ≤ N.

Test set 1
Time limit: 20 seconds.
1 ≤ N ≤ 100.

Test set 2
Time limit: 40 seconds.
For up to 5 cases, 1 ≤ N ≤ 5 × 105.
For all other cases, 1 ≤ N ≤ 100.

Sample

Input

Output

3
8 2 3
1 1 3 4 4 3 4
10 3 4
1 1 1 1 1 1 1 1 1
4 3 1
1 2 3


Case #1: 2.65625
Case #2: 1.9
Case #3: 2.875


The trees for each sample case are shown in the diagram below.  A few example colourings for sample case #1 are shown below.
If Amadea picks node 5 and Bilva picks node 8, then together they paint 4 unique nodes: Amadea paints nodes 5 and 3, while Bilva paints nodes 8 and 1.
If Amadea picks node 7 and Bilva picks node 6, then together they paint 3 unique nodes: Amadea paints nodes 7 and 1, while Bilva paints nodes 6 and 1 (note that Amadea painted node 1 as well).
