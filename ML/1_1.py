m,n = map(int,input().split())
st1 = {tuple([map(int,input().split())]) for i in range(n)}
st2 = {tuple([map(int,input().split())]) for i in range(m)}
print(str(st1 & st2) if len(st1 & st2)==0 else 'empty')
print(st1 - st2 if len(st1 - st2)==0 else 'empty')