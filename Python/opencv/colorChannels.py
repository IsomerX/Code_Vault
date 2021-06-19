import cv2 as cv
import numpy as np

img = cv.imread('images/2.jpg')

blank = np.zeros(img.shape[:2], dtype = 'uint8')

cv.imshow('cat', img)

# split them all apart

b,g,r = cv.split(img)

cv.imshow("blue", b)
cv.imshow("green", g)
cv.imshow("red", r)


# merge them black
merged = cv.merge([b,g,r])
cv.imshow("merged", merged)

# show them separately
blue = cv.merge([b,blank,blank])
green = cv.merge([blank,g,blank])
red = cv.merge([blank,blank,r])

cv.imshow("blue single", blue)
cv.imshow("green single", green)
cv.imshow("red single", red)

# code from another lecture but be sure to check this shit out, its so cool 
# ory = cv.bitwise_or(cv.bitwise_or(blue, red), green)
# cv.imshow("ortry",ory)

# andy = cv.bitwise_and(blue, img)
# cv.imshow("andy", andy)

# xory = cv.bitwise_xor(blue, green)
# cv.imshow("xor operator", xory)

# noty = cv.bitwise_not(img)
# cv.imshow("not operator", noty)

cv.waitKey(0)