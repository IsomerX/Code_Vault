<<<<<<< HEAD
import cv2 as cv

img = cv.imread('images/2.jpg')

cv.imshow('cat', img)

def rescale(frame, scale=0.75):
    width = int(frame.shape[1]*scale)
    height = int(frame.shape[0]*scale)
    dimensions = (width,height)

    return cv.resize(frame, dimensions, interpolation=cv.INTER_AREA)

img = rescale(img)

cv.imshow('mouse', img)

=======
import cv2 as cv

img = cv.imread('images/2.jpg')

cv.imshow('cat', img)

def rescale(frame, scale=0.75):
    width = int(frame.shape[1]*scale)
    height = int(frame.shape[0]*scale)
    dimensions = (width,height)

    return cv.resize(frame, dimensions, interpolation=cv.INTER_AREA)

img = rescale(img)

cv.imshow('mouse', img)

>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
cv.waitKey(0)