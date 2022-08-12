def main():
    t = int(input())

    while t:
        t-=1
        g = [int(x) for x in input().split()][1:]
        ans = 0

        for i, (p, c) in enumerate(zip(g, g[1:])):
            if(c < p or (c > p and (c-p) != 1)):
                ans = i
                break

        print(ans+2)



if __name__ == '__main__':
    main()