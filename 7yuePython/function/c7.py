def demo(*param):
    print(param)
    print(type(param))

# demo(1,3,4,5,7,7)
a = (1, 2, 3, 4, 5, 6)
demo(*a)
