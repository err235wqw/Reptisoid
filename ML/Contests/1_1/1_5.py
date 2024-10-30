if __name__ == "__main__":
    try:
        x, y, z = int(input()), int(input()), int(input())
        print(abs(y-x)+abs(z-y)+abs(x-z))
    except KeyboardInterrupt:
        print()