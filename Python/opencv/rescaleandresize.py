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

cv.waitKey(0)