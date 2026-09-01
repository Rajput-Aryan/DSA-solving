# 🧩 Find the fine

![Platform](https://img.shields.io/badge/Platform-GeeksforGeeks-green.svg) ![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen.svg) ![Language](https://img.shields.io/badge/Language-c-blue.svg)

| Property | Details |
| :--- | :--- |
| **Platform** | GeeksforGeeks |
| **Difficulty** | Easy |
| **Topics** | `Arrays` |
| **Language** | `c` |
| **Solved At** | Tue, 01 Sep 2026 11:53:13 GMT |

---

## 📝 Problem Statement

Given an array of car numbers **car[]** , an array of penalties **fine[]** , and an integer **date** , determine the total fine collected on that date. The fine is collected based on parity, i.e., on an even date, fines are collected from odd-numbered cars, and on an odd date, fines are collected from even-numbered cars.

### ⚡ Examples

**Input:** date = 12, car[] = [2375, 7682, 2325, 2352], fine[] = [250, 500, 350, 200]

**Output:** 600

**Explanation:** The date is 12 (even), so we collect the fine from odd-numbered cars. The odd-numbered cars and the fines associated with them are as follows:
2375 -> 250
2325 -> 350
The sum of the fines is 250+350 = 600

**Input:** date = 8, car[] = [2222, 2223, 2224], fine[] = [200, 300, 400]

**Output:** 300

### 🔒 Constraints

1 <= car.size <= 10^5

1 <= car[i], fine[i], date <= 10^5

---

## 💡 Solution & Complexity Notes

_Add your approach, complexity analysis, and edge cases here._

- **Time Complexity:** _O(N)_
- **Space Complexity:** _O(1)_

---

🔗 **Direct Link:** [View Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/find-the-fine4353/1)
