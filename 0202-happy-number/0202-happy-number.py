class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set()
        while n != 1 and n not in seen:
            seen.add(n)
            s = 0
            while n > 0:
                d = n % 10
                s += d ** 2
                n //= 10
            n = s
        if n == 1:
            return True
        return False