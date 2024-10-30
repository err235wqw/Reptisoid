a = [input() for s in range(int(input()))]
print(sum([1 for i in a if not('..' in i) and i.count('@') == 1 and i[0]!= '@' and i[-1] != '@']))