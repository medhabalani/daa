# Assignment-3

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019021  |   Medha Balani | medhabalani |
|    IIT2019022  |   Saksham Aggarwal | saksham701 | 
|    IIT2019023  |   Utkarsh Gangwar | utkarshrocks  |

**Group No-**"7"

**Faculty Name-**"Dr. Mohammed Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Find improved method for Binary Search using heuristics.

---
## How to use code
<br> To use this code on your computer, just clone this repository on your system, after which you can look all the resources such as report, ppt and c++ implementation of this problem statement. Just GitBash in the folder where you want to clone the repo and download it-
```
#Download project
https://github.com/medhabalani/daa.git

```

---

Run the code
```
g++ <filename.>cpp -std=c++14
./a.out
```
Input format -

```
Input consists of two lines.
First line contains two integers n and key denoting the size of array and element to be searched respectively.
Second line contains n space seperated integers denoting the elements of array in non decreasing order.

```
Output format -

```
Zero based Index of the key element to be searched and -1 if that element does not exist.
```
Input

```
Test Case #1
6 7
1 3 7 9 9 11

Test Case #2
10 2
1 1 1 1 1 1 1 1 1 1

Test Case #3
4 3
3 4 5 6 

```
Output

```
Test Case #1
2
Test Case #2
-1
Test Case #3
0

```
---


### Theory
* We are required to return the index of the element key in the array Arr which is sorted in non-decreasing order.We return -1 if key doesn’t occur in Arr.
* In this algorithm we not only compare the middle element of our search space with key but also compare key with left and right bounds , so that we don’t take many iterations to find elements present at the ends.

---

### Analysis

**Time Complexity**
<br>
* Best case for this algorithm would be when key is present at either of mid , end or start of the array Arr. => T = Ω(1)
* In worst case , T = O(logN) 
* We can conclude that by using heuristics we can optimise binary search algorithm in the worst case as well as average case.


**Space Complexity**
<br>Since no extra space is used in this algorithm , so auxiliary space is constant. Only the input array is of size n. So , Space Complexity = Input Space + Auxiliary Space = O(n), this Algorithm uses linear Space.

---

### References

1 https://www.hackerearth.com/practice/algorithms/searching/binary-search/tutorial/<br>
2 https://en.wikipedia.org/wiki/Heuristic_(computer_science)
