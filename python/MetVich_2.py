from numpy import arange
from math import prod

def main():
    variant, n = int(input()), int(input())
    for x in (arange(0.5, 2.5, 1)):
         answer = sum([prod([x - x_i for x_i in range(0,n) if x_i != x_iz]) / prod([x_iz - x_i for x_i in range(0,n) if x_i != x_iz]) for x_iz in range(0,n)])
         print(f"P_n({x}) = {answer}")

        

main()
