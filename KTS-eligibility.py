from datetime import date

def main():
   t = int(input())

   while t:
       t-=1
       name, begin, birth, courses = str(input()).split()

       begin_s = [ int(x) for x in begin.split('/')]
       begin = date(*begin_s)

       birth_s = [ int(x) for x in birth.split('/')]
       birth = date(*birth_s)

       courses = int(courses)

       if begin.year >= 2010 or birth.year >= 1991:
           print(name, "eligible")

       elif courses >= 41:
           print(name, "ineligible")

       else:
            print(name, "coach petitions")

if __name__ == '__main__':
    main()