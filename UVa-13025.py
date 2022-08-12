from datetime import date

def main():
    d = date(2013, 5, 29)
    print(d.strftime("%B %d, %Y %A"))

if __name__ == '__main__':
    main();