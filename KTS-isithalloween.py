def main():
    line = input()
    m, d = line.split()
    m = str(m)
    d = int(d)
    
    print("yup") if m == "OCT" and d == 31 or m == "DEC" and d == 25 else print("nope")

if __name__ == "__main__":
    main()