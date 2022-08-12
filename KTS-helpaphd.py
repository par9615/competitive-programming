def main():
    t = int(input())

    while t:
        t-=1
        line = str(input())

        if line == 'P=NP':
            print("skipped")
        else:
            print(eval(line))

if __name__ == '__main__':
    main()