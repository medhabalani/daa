# Assignment-2

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019021  |   Medha Balani | medhabalani |
|    IIT2019022  |   Saksham Aggarwal | saksham701 | 
|    IIT2019023  |   Utkarsh Gangwar | utkarshrocks  |

**Group No-**"7"

**Faculty Name-**"Dr. Mohammed Javed"

**Mentor Name-** "Mr. Bulla Rajesh"

---
## Problem Statement
Find sorted components in a given set. Merge sorted components to sort the given set.

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
g++ filename.cpp -std=c++14
./a.out
```
Input format -

```
Input consists of two lines.
First line contains a single integer n, the size of the array.
Second line contains n space seperated integers denoting the elements of array.

```
Input

```
4
2 1 4 3
```
Output

``` 
The sorted components are : { 2 },{ 1 4 },{ 3 }

The final sorted array is : 1 2 3 4
```
---


### Theory
* Here, we have to find the sorted components in the input set/array and thereafter merge these sorted components in a way to ultimately obtain completely sorted set/array.
* For example, if we have {2,1,4,3} as input, here, sorted components are {2}, {1,4}, {3}. And after merging these we can obtain result {1,2,3,4} hence sorting the input set/array.
* First we store all sorted components in vector then merge those components using two approaches, using merge sort function and another using set STL in cpp.


---

### Analysis

**Time Complexity**
<br>
* The algorithm to find sorted components from a given array takes O(n) complexity in both the best and worst cases.
* For merging Sorted Components we have described 2 algorithms. First algorithm which merges 2 sorted arrays into 1 using 2pointer technique takes O(n) for each merge operation therefore for k Sorted Components a total of k − 1 merge operations would be required. So, this algorithm takes O(n∗k) complexity where n is the size of input array.
* In Second Algorithm using Set data structure , since every element is pushed into the set only once and it is extracted only once , also the size of set never grows beyond k ,so the total time complexity comes out to be O(n ∗ log k) where n is the size of input array.



**Space Complexity**
<br>The space complexity of this algorithm is O(n) where n is the size of input array.

---

### References

1 https://www.geeksforgeeks.org/merge-k-sorted-arrays-set-2-different-sized-arrays/<br>
2 https://www.geeksforgeeks.org/set-in-cpp-stl/<br>
3 https://www.giss.nasa.gov/tools/latex/ltx-2.html<br>
4 https://www.cplusplus.com/reference/set/set/
