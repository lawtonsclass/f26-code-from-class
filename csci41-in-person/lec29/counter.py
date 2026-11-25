class Counter:
    # member variables get defined in the constructor

    # constructors use __init__ instead of the name of the class
    # every method (including the constructor) takes "self" as the
    # first parameter--that is the "this" form C++
    def __init__(self):
        self.count = 0 # this defines the member var

    def inc(self):
        # there's no ++ in python
        self.count += 1

    def getCount(self):
        return self.count

# there is no new in Python, you just call the constructor
# notice that you don't say self when you make calls--python includes
# it for you!!!
c = Counter() # equivalent to Counter = new Counter(); from Java
c.inc() # --> inc(c)
c.inc()
c.inc()
print(c.getCount())
