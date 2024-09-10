from numpy import arange
from math import prod

def main():
    variant, n = int(input()), int(input())
    for x in (arange(0.5, 2.5, 1)):
         answer = prod([x - x_i for x_i in range(0,n)])/prod([x_i - x_i for x_i in range(0,n)])
        

main()
