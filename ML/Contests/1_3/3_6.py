a = int(input())
print("Yes" if sum([i == a for i in [1, 2**3,3**3,5**3,7**3,11**3,13**3,17**3,19**3,23**3,27**3, 29**3,31**3,37**3,41**3, 43**3]]) == 1 else "No")