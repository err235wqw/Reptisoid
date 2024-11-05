n = int(input())
accounts = {}
inn = [input().split(',') for i in range(n)]
inn = sorted(inn)
for i in range(n):
    name, amount = inn[i][0], int(inn[i][1])
    accounts[name] = accounts.get(name, 0) + amount

sorted_accounts = dict(
    sorted(accounts.items(), key=lambda item: item[1], reverse=True))

for name in sorted_accounts.keys():
    print(f"{name} {sorted_accounts[name] *
          0.95:.2f} {sorted_accounts[name]*0.05:.2f}")
