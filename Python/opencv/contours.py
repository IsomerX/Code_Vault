import cv2 as cv
import numpy as np

img = cv.imread('images/2.jpg')

cv.imshow('cat', img)

blank = np.zeros(img.shape,dtype='uint8')
cv.imshow('Blank', blank)

grey = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('grey', grey)

blur = cv.GaussianBlur(grey,(5,5),cv.BORDER_DEFAULT)

canny = cv.Canny(img, 125, 175)
cv.imshow("canny",canny)

canny2 = cv.Canny(blur, 125, 175)
cv.imshow("cannyBlurred",canny2)

ret, thresh = cv.threshold(grey, 150, 255, cv.THRESH_BINARY)
cv.imshow("thresholdin it", thresh)

contour, hierarchy = cv.findContours(canny, cv.RETR_LIST, cv.CHAIN_APPROX_SIMPLE)
print(len(contour))

print("blur it")

contour2, hierarchy2 = cv.findContours(canny2, cv.RETR_LIST, cv.CHAIN_APPROX_SIMPLE)
print(len(contour2))

print("with thresh")
contour3, hierarchy3 = cv.findContours(thresh, cv.RETR_LIST, cv.CHAIN_APPROX_SIMPLE)
print(len(contour3))

cv.drawContours(blank, contour, -1, (0,0,255),2)
cv.imshow("drawn contours", blank)

cv.waitKey(0)