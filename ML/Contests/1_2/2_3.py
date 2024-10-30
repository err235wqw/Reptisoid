from calendar import isleap

try:
    day = input()
    print(int(((int(day) % 3 == 0) != (day[-1]=='3'))))
except KeyboardInterrupt:
    print()