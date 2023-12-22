class Solution:
    def __init__(self, arr):
        self.arr = arr
    def sortByBits(self,arr):
        def countBits(n):
            count = 0
            while n:
                if n & 1:
                    count += 1
                n >>= 1
            return count

        bits_list = []
        for n in arr:
            ones = countBits(n)
            bits_list.append((ones, n))


        return bits_list


test = [1,2,3,4,5]
sol = Solution(test)
print(sol.sortByBits(test))
