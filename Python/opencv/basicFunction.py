<<<<<<< HEAD
import cv2 as cv

img = cv.imread('images/2.jpg')

cv.imshow('cat', img)

# converting to black and white
gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow("b&w",gray)

# blurring the image
blur = cv.GaussianBlur(img, (11,11), cv.BORDER_DEFAULT)
cv.imshow("blur",blur)

# edge detection thingy
canny = cv.Canny(img, 125,175)
cv.imshow("canny",canny)

# dilating it
dilated = cv.dilate(canny, (3,3), iterations = 1)
cv.imshow("dilated",dilated)

# eroding it
ero = cv.erode(dilated, (3,3), iterations=1)
cv.imshow("eroded",ero)

# resize
res = cv.resize(img, (10,10))
cv.imshow("resized", res)

#VELA TESTING
# res2 = cv.resize(res, (500,500), interpolation = cv.INTER_CUBIC)
# cv.imshow("res",res2)

# cropping
cropped = img[50:200, 200:400]
cv.imshow("cropped", cropped)


=======
import cv2 as cv

img = cv.imread('images/2.jpg')

cv.imshow('cat', img)

# converting to black and white
gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow("b&w",gray)

# blurring the image
blur = cv.GaussianBlur(img, (11,11), cv.BORDER_DEFAULT)
cv.imshow("blur",blur)

# edge detection thingy
canny = cv.Canny(img, 125,175)
cv.imshow("canny",canny)

# dilating it
dilated = cv.dilate(canny, (3,3), iterations = 1)
cv.imshow("dilated",dilated)

# eroding it
ero = cv.erode(dilated, (3,3), iterations=1)
cv.imshow("eroded",ero)

# resize
res = cv.resize(img, (10,10))
cv.imshow("resized", res)

#VELA TESTING
# res2 = cv.resize(res, (500,500), interpolation = cv.INTER_CUBIC)
# cv.imshow("res",res2)

# cropping
cropped = img[50:200, 200:400]
cv.imshow("cropped", cropped)


>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
cv.waitKey(0)