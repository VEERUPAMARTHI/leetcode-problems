class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        def reverse(n):
            r = 0
            while n > 0:
                d = n % 10
                r = r * 10 + d
                n //= 10
            return r
        r1 = reverse(num)
        r2 = reverse(r1)
        if r2 == num:
            return True
        return False
        