from typing import List

class Solution:
    def twoSum(self, arr: List[int], target: int) -> List[int]:

        length = len(arr)
        index_i = -1
        index_j = -1

        for i in range(length):
            for j in range(i + 1, length):
                if arr[i] + arr[j] == target:
                    index_i = i
                    index_j = j
                    return [index_i, index_j]

        return []
