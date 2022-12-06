def main():
    a = [['0', '.', '0', '.', '.'],
        ['.', '.', '0', '.', '.'],
        ['.', '0', '.', '.', '0'],
        ['0', '.', '0', '.', '.'],
        ['0', '0', '0', '0', '0']]
    
    r = len(a)
    c = len(a[0])

    print('ORIGINAL')
    for i, y in enumerate(a):
        for j, x in enumerate(y):
            print(x, end=' ')
        print()

    print('ROTATED TO THE RIGHT')
    for j in range(c):
        # for i in range(r-1, -1, -1): # WAY1
            # print(a[i][j], end=' ')
        for i in range(1, r+1):
            print(a[r-i][j], end=' ')
        print()


if __name__ == '__main__':
    main()