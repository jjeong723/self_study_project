from test_folder import mod_test as FC

yong = FC.FourCal(1, 2)
park = FC.FourCal(3, 4)

yong.setdata(1,2)
park.setdata(3,4)

print(yong.test, park.test)

yong.change_test()

print(yong.test, park.test)
print(yong.add())
print(park.add())
yong.display()
park.display()


