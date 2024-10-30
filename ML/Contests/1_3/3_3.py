a = [abs(int(input())) for i in range(int(input()))]
print(len(a) - a[::-1].index(max(a)))