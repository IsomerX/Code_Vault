<<<<<<< HEAD
import cv2 as cv
import numpy as np

img = cv.imread("images/2.jpg")
cv.imshow('Cats', img)

grey = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('grey', grey)

# laplacian  
lap = cv.Laplacian(grey, cv.CV_64F)
lap = np.uint8(np.absolute(lap))
cv.imshow("lap", lap)

# sobel
sobx = cv.Sobel(grey, cv.CV_64F, 1, 0)
soby = cv.Sobel(grey, cv.CV_64F, 0, 1)
combined_sob = cv.bitwise_or(sobx, soby)

cv.imshow('sobx', sobx)
cv.imshow('soby', soby)
cv.imshow('sob combined', combined_sob)

# Canny
can = cv.Canny(grey, 150, 175)
cv.imshow('canny', can)

=======
import cv2 as cv
import numpy as np

img = cv.imread("images/2.jpg")
cv.imshow('Cats', img)

grey = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('grey', grey)

# laplacian  
lap = cv.Laplacian(grey, cv.CV_64F)
lap = np.uint8(np.absolute(lap))
cv.imshow("lap", lap)

# sobel
sobx = cv.Sobel(grey, cv.CV_64F, 1, 0)
soby = cv.Sobel(grey, cv.CV_64F, 0, 1)
combined_sob = cv.bitwise_or(sobx, soby)

cv.imshow('sobx', sobx)
cv.imshow('soby', soby)
cv.imshow('sob combined', combined_sob)

# Canny
can = cv.Canny(grey, 150, 175)
cv.imshow('canny', can)

>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
cv.waitKey(0)