from datetime import date

def main():
    s = date(2020, 9, 4)
    t = date.today()

    print(s.strftime('%a'))
    print("days", (t-s).days)

if __name__ == '__main__':
    main()