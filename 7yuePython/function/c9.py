
def city_temp(**param):
    # print(param)
    # print(type(param))
    # pass
    for key, value in param.items():
        print(key, ':', value)

city_temp(bj='32c', sz='36c', aq='33c')
a = {'sz':'36c', 'aq':'33c'}
city_temp(**a)