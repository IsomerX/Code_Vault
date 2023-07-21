<<<<<<< HEAD
import cv2 as cv
import matplotlib.pyplot as plt

img = cv.imread('images/2.jpg')

cv.imshow('cat', img)

# opencv stores images as BGR i.e. blue green red but matlib uses images as rgb, thus it inverts the colors when taken from opencv

plt.imshow(img)
plt.show()

bw = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('b&w', bw)

hsv = cv.cvtColor(img, cv.COLOR_BGR2HSV)
cv.imshow('HSV', hsv)

lab = cv.cvtColor(img,cv.COLOR_BGR2LAB)
cv.imshow('LAB', lab)

# BGR to RGB
rgb = cv.cvtColor(img, cv.COLOR_BGR2RGB)
cv.imshow('rgb', rgb)

plt.imshow(rgb)
plt.show()

# hsv to bgr 
hsv_bgr = cv.cvtColor(hsv,cv.COLOR_HSV2BGR)
cv.imshow("converted hsv to bgr", hsv_bgr)

#lab to bgr
lab_bgr = cv.cvtColor(lab,cv.COLOR_LAB2BGR)
cv.imshow("converted lab to bgr", lab_bgr)

# grey to bgr 
bw_bgr = cv.cvtColor(bw,cv.COLOR_GRAY2BGR)
cv.imshow("converted bw to bgr", bw_bgr)
# i mean it doesnt work as good

=======
import cv2 as cv
import matplotlib.pyplot as plt

img = cv.imread('images/2.jpg')

cv.imshow('cat', img)

# opencv stores images as BGR i.e. blue green red but matlib uses images as rgb, thus it inverts the colors when taken from opencv

plt.imshow(img)
plt.show()

bw = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('b&w', bw)

hsv = cv.cvtColor(img, cv.COLOR_BGR2HSV)
cv.imshow('HSV', hsv)

lab = cv.cvtColor(img,cv.COLOR_BGR2LAB)
cv.imshow('LAB', lab)

# BGR to RGB
rgb = cv.cvtColor(img, cv.COLOR_BGR2RGB)
cv.imshow('rgb', rgb)

plt.imshow(rgb)
plt.show()

# hsv to bgr 
hsv_bgr = cv.cvtColor(hsv,cv.COLOR_HSV2BGR)
cv.imshow("converted hsv to bgr", hsv_bgr)

#lab to bgr
lab_bgr = cv.cvtColor(lab,cv.COLOR_LAB2BGR)
cv.imshow("converted lab to bgr", lab_bgr)

# grey to bgr 
bw_bgr = cv.cvtColor(bw,cv.COLOR_GRAY2BGR)
cv.imshow("converted bw to bgr", bw_bgr)
# i mean it doesnt work as good

>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
cv.waitKey(0)