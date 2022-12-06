def main():
    s = input().strip()
    s = s.split('-')
    res = ''
    res = [res + x[0] for x in s]

    print("".join(res))

if __name__ == '__main__':
    main()