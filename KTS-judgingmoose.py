def main():
    l, r = list(input().split())
    l = int(l)
    r = int(r)

    if l or r:
        if l == r:
            print('Even', l+r)
        else:
            print('Odd', 2*max(l, r))
    else:
        print("Not a moose")

if __name__ == '__main__':
    main()