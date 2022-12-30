# TODO
from cs50 import get_string

#get str
str = get_string("Text: ")
#length
l = 0
#word
w = 1
#sentence
s = 0

#loop for chars
for i in range(len(str)):
    #" " char
    if str[i] == " ":
        w += 1
    #. char
    if str[i] == ".":
        s += 1
    #! char
    if str[i] == "!":
        s += 1
    #?char
    if str[i] == "?":
        s += 1
    #normal char
    else:
        l += 1
#kelime/harf sayısı
kelimeharf = (l*100)/w
#cumle/kelime sayısı
cumlekelime = (s*100)/w
#formula
sonuc = (0.0588*kelimeharf)-(0.296*cumlekelime)-15.8
#round and -6.2
sonuc = round(sonuc-6.2)
if sonuc > 15:
    #grater
    print("Grade 16+")
if sonuc < 1:
    #lower
    print("Before Grade 1")
if sonuc < 16:
    if sonuc > 0:
        print("Grade", sonuc)