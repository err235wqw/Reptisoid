from calendar import isleap

try:
    year = int(input())
    print(29 if isleap(year) else 28)
except KeyboardInterrupt:
    print()