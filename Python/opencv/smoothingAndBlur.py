import cv2 as cv

img = cv.imread('images/2.jpg')

cv.imshow('cat', img)

# METHODS
# averaging
average = cv.blur(img, (7,7))
cv.imshow("average", average)

#Gaussian
gauss = cv.GaussianBlur(img,(7,7),0)
cv.imshow("gauss", gauss)

#median - removes noise mostly! v imp in data science models
med = cv.medianBlur(img, 3)
cv.imshow("median", med)

#bilateral, also v imp in data science
bi = cv.bilateralFilter(img, 10, 35, 25)
cv.imshow("bilateral", bi)

cv.waitKey(0)