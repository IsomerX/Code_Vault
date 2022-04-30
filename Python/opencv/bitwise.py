import cv2 as cv
import numpy as np

blank = np.zeros((400,400),dtype='uint8')

rectangle = cv.rectangle(blank.copy(), (30,30), (370,370), 255, -1)
circle = cv.circle(blank.copy(), (200,200), 200, 255, -1)

cv.imshow("rectangle", rectangle)
cv.imshow("circle", circle)

# AND - intersection
andy = cv.bitwise_and(circle, rectangle)
cv.imshow("and operator", andy)

# OR - union
ory = cv.bitwise_or(circle, rectangle)
cv.imshow("or operator", ory)

# XOR - union - intersection
xory = cv.bitwise_xor(circle, rectangle)
cv.imshow("xor operator", xory)

# NOT
noty = cv.bitwise_not(rectangle)
cv.imshow("not operator", noty)

cv.waitKey(0)