try:
    a, b = int(input()), int(input())
    print(int(a + (b - a)/2),int( -(b - a)/2))
except KeyboardInterrupt:
    print()

"""
x + y = a
x - y = b
x = a - y

a - y - y = b
-2y = b - a
y = -(b - a)/2
x = a + (b - a)/2
"""
1