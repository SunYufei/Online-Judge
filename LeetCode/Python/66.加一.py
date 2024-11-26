#
# @lc app=leetcode.cn id=66 lang=python3
#
# [66] 加一
#
from typing import List


# @lc code=start
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = len(digits)
        for i in range(n - 1, -1, -1):
            if digits[i] != 9:
                digits[i] += 1
                for j in range(i + 1, n):
                    digits[j] = 0
                return digits
        return [1] + [0] * n


# @lc code=end
