# Assignment-1

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
Generate all sequences of length 1 to 11. Detect and print sorted sequences. Range of numbers in a sequence should be the length of sequence like for sequence of length 4 numbers should be 1, 2, 3, and 4. 

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
gcc main.c
./a.out
```
Output
```
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 10 11 
1 2 3 
1 2 
1 2 3 4 5 
1 
1 2 3 4 
1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 
1 2 3 4 5 6 7 8 9 10 

```
---




### Theory
Here, we will take all the lengths from 1-11 one by one, and generate all n! permutations checking each, whether it is sorted or not and will print the sorted ones. We generate a particular length of permutation randomly say n and calculate n!. There after we iterate through all n! permutations. We generate next permutation using the current permutation.<br>
Here, we find next permutation in a lexicographically increasing order. And any sequence in descending order does not have a next permutation so we just reverse it.<br>
So, to do this, first we find the first element from the last which is not following the descending order and let it be x at index i, for example in 1 2 4 3 , it is 2. Then we find the smallest greater element to x found element from right side , and then we swap the two.<br>
After this, observe that, after i, everything is in descending order, so to find lexicographically smallest, we reverse the sequence after i. 
Idea is to find smallest next permutation which is greater then the current permutation.
If no i can be found in the first step then we reverse it completely.



---

### Analysis

**Time Complexity**
<br>
Firstly, iterating over all the different lengths (here it is 11) -> O(n)<br>
Then, we iterate over all permutations of a particular length which gives O(n!) in worst case and Ω(1) in best case, inside which we do two things, check if sorted and to find the next permutation.<br>
Time complexity of sort check -> O(n) (worst case), Ω(1) (best case)<br>
Time complexity of next permutation algorithm -> O(n)<br>
Overall Time complexity :   
In Worst Case : O(n . n! . (n+n)) ≃ O(n<sup>2</sup> .n!)
<br>In Best Case : Ω(n . 1 . (n+1) ≃ O(n<sup>2</sup> )


**Space Complexity**
<br>Here, two arrays are there, visited array and permutation array, so space complexity would be O(n+n) ≃ O(n).


---

### References

[1]Introduction to Algorithms (T.H Cormen)<br>
[2]https://en.wikipedia.org/wiki/Permutation<br>
[3]https://codeforces.com/problemset/customtest
