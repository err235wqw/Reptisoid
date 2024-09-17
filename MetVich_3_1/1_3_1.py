from numpy import arange
from math import prod, sin, pi, cos

def NetRec(xs, xe):
    if xs == xe:
        return sin(xs)**2
    else:
        a = (NetRec(xs+1,xe)-NetRec(xs,xe-1))/(xe-xs)
        return a
    
def main():
    a, b, n = int(input()), int(input()), int(input())
    x_i = [(a+b)/2+((b-a)/2)*cos((((2*i+1)*pi)/(2*(n+1)))) for i in range(0,n)]
    for x in x_i:
        answer = sum([NetRec(0,i)*prod([x-i1 for i1 in range(0,i)]) for i in range(0,n)])
        print(f"P_n({x}) = {answer} true = {sin(x)**2}.")
   
         
main()
