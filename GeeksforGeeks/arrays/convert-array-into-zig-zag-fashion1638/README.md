# 🧩 Convert To Zig-Zag

![Platform](https://img.shields.io/badge/Platform-GeeksforGeeks-green.svg) ![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen.svg) ![Language](https://img.shields.io/badge/Language-c-blue.svg)

| Property | Details |
| :--- | :--- |
| **Platform** | GeeksforGeeks |
| **Difficulty** | Easy |
| **Topics** | `Arrays` |
| **Language** | `c` |
| **Solved At** | Mon, 07 Sep 2026 10:57:57 GMT |

---

## 📝 Problem Statement

Given an array arr of distinct elements, the task is to rearrange the elements of the array in a zig-zag fashion so that the converted array should be in the below form: 

arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 

Note: Modify the given arr[] only, If your transformation is correct, the output will be " **true"** else the output will be **"false"** . 

### ⚡ Examples

**Input:** arr[] = [4, 3, 7, 8, 6, 2, 1]

**Output:** true

**Explanation:** After modification the array will look like 3 < 7 > 4 < 8 > 2 < 6 > 1, the checker in the driver code will produce 1.

**Input:** arr[] = [4, 7, 3, 8, 2]

**Output:** true

**Explanation:** After modification the array will look like 4 < 7 > 3 < 8 > 2 hence output will be 1.

**Input:** arr[] = [2, 8, 1, 7, 5, 9]

**Output:** true

### 🔒 Constraints

1 <= arr.size() <= 10^6

0 <= arr_i <= 10^8

---

## 💡 Solution & Complexity Notes

_Add your approach, complexity analysis, and edge cases here._

- **Time Complexity:** _O(N)_
- **Space Complexity:** _O(1)_

---

🔗 **Direct Link:** [View Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1)
