def main():
    m = int(input())
    n = int(input())
    s = 0

    for _ in range(n):
        u = int(input())
        s += m-u

    print(m+s)

if __name__ == "__main__":
    main()