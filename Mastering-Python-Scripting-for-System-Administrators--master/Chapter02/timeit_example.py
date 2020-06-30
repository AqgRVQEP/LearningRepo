import timeit
prg_setup = "from math import sqrt"
prg_code = '''
def timeit_example():
	list1 = []
	for x in range(50):
		list1.append(sqrt(x))
'''
# timeit statement
print(timeit.timeit(setup = prg_setup, stmt = prg_code, number = 100000))

# from math import sqrt

# def timeit_example():
# 	list1 = []
# 	for x in range(50):
# 		list1.append(sqrt(x))
# 	print(list1)

# timeit_example()