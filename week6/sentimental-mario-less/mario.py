# TODO
height=input("Height: ")
#int check
while not height.isdigit():
    height = input("Error. Please input an INTEGER: ")
#8 check
while int(height)>8:
    height = input("Error. Please input an INTEGER less than 9: ")
#0 check
while int(height)<1:
    height = input("Error. Please input an INTEGER greater than 0: ")
h=int(height)
##quite easy
for i in range(1,h+1):
    ##spaces and #
    print(((h-i)*" ")+(i*"#"))

