# Assignment-1

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019021  |   Medha Balani | medhabalani |
|    IIT2019022  |   Saksham Aggarwal | saksham701 | 
|    IIT2019003  |   Utkarsh Gangwar | utkarshrocks  |

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
Project Initialize 
```

```
---

Run the code
```

```
Output
```

```
---

**Test case**


```

```

---

### Theory


---

### Analysis

**Time Complexity**
<br>
Firstly, iterating over all the different lengths (here it is 11) -> O(n)<br>
Then, we iterate over all permutations of a particular length which gives O(n!) in worst case and Ω(1) in best case, inside which we do two things, check if sorted and to find the next permutation.<br>
Time complexity of sort check -> O(n) (worst case), Ω(1) (best case)<br>
Time complexity of next permutation algorithm -> O(n)<br>
Overall Time complexity :   
In Worst Case : O(n . n! . (n+n)) ≃ O(n2 .n!)
<br>In Best Case : Ω(n . 1 . (n+1) ≃ O(n2 )


**Space Complexity**
<br>Here, two arrays are there, visited array and permutation array, so space complexity would be O(n+n) ≃ O(n).


---

### References

Introduction to Algorithms (T.H Cormen)<br>
https://en.wikipedia.org/wiki/Permutation<br>
https://codeforces.com/problemset/customtest
