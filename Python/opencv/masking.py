import cv2 as cv
import numpy as np

img = cv.imread('images/2.jpg')

blank = np.zeros(img.shape[:2], dtype="uint8")
cv.imshow('cat', img)

maskCircle = cv.circle(blank.copy(), (img.shape[1]//2, img.shape[0]//2), 350, 255, -1)
maskRectangle = cv.rectangle(blank.copy(), (img.shape[1]//2-300, img.shape[0]//2-300), (img.shape[1]//2+300, img.shape[0]//2+300), 255, -1)

andy = cv.bitwise_and(maskCircle, maskRectangle)
cv.imshow("andy", andy)

maskedCircle = cv.bitwise_and(img, img, mask = maskCircle)
cv.imshow("masked image Circle", maskedCircle)

maskedRectangle = cv.bitwise_and(img, img, mask = maskRectangle)
cv.imshow("masked image Rectangle", maskedRectangle)

maskedAndy = cv.bitwise_and(img, img, mask = andy)
cv.imshow("masked image andy", maskedAndy)

cv.waitKey(0)