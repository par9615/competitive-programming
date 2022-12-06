def main():
    s = input().strip()
    s = str(s)
    
    res = s + (' ' + s)*2
    
    print(res)

if __name__ == '__main__':
    main()