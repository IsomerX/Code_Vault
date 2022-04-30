import cv2 as cv

img = cv.imread("images/2.jpg")
cv.imshow('Cats', img)

grey = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
# cv.imshow("show", grey)

# simple thresholding
threshold, thresh = cv.threshold(grey, 150, 255, cv.THRESH_BINARY)
cv.imshow("threshed", thresh)

threshold, thresh_inv = cv.threshold(grey, 150, 255, cv.THRESH_BINARY_INV)
cv.imshow("threshed_INV", thresh_inv)

# adaptive thresholding
adaptive_thresh = cv.adaptiveThreshold(grey, 255, cv.ADAPTIVE_THRESH_MEAN_C, cv.THRESH_BINARY, 9, 5)
cv.imshow("adapt", adaptive_thresh)

adaptive_thresh_gaus = cv.adaptiveThreshold(grey, 255, cv.ADAPTIVE_THRESH_GAUSSIAN_C, cv.THRESH_BINARY, 9, 5)
cv.imshow("adapt2", adaptive_thresh_gaus)

cv.waitKey(0)