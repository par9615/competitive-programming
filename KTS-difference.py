from sys import stdin

def main():
    lines = stdin.readlines()

    for line in lines:
        a, b = line.split()
        a = int(a)
        b = int(b)
        print(abs(a-b))



if __name__ == '__main__':
    main();