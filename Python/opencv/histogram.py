import cv2 as cv
import matplotlib.pyplot as plt
import numpy as np

img = cv.imread('images/2.jpg')
cv.imshow('cat', img)

blank = np.zeros(img.shape[:2], dtype="uint8")

grey = cv.cvtColor(img,cv.COLOR_BGR2GRAY)
cv.imshow('grey', grey)

circle = cv.circle(blank, (img.shape[1]//2, img.shape[0]//2), 350, 255, -1)
mask = cv.bitwise_and(img, img, mask = circle)

cv.imshow("mask", mask)

# grayscale histo

# with mask 

# greyhis = cv.calcHist([grey], [0], mask, [256], [0,256])

# plt.figure()
# plt.title('bw histogram')
# plt.xlabel('Bins')
# plt.ylabel('no of pixels')
# plt.plot(greyhis)
# plt.xlim([0,256])
# plt.show()

# without mask 

# greyhis = cv.calcHist([grey], [0], None, [256], [0,256])

# plt.figure()
# plt.title('bw histogram')
# plt.xlabel('Bins')
# plt.ylabel('no of pixels')
# plt.plot(greyhis)
# plt.xlim([0,256])
# plt.show()


# color histogram without mask

plt.figure()
plt.title('color histogram')
plt.xlabel('Bins')
plt.ylabel('no of pixels')
colors = ('b', 'g', 'r')
for i, col in enumerate(colors):
    hist = cv.calcHist([img], [i], None, [256], [0,256])
    plt.plot(hist, color = col)
    plt.xlim([0,256])

plt.show()

# color histogram with mask 

mask = cv.circle(blank, (img.shape[1]//2, img.shape[0]//2), 350, 255, -1)
masked = cv.bitwise_and(img, img, mask = mask)

plt.figure()
plt.title('color histogram with mask')
plt.xlabel('Bins')
plt.ylabel('no of pixels')
colors = ('b', 'g', 'r')
for i, col in enumerate(colors):
    hist = cv.calcHist([img], [i], mask, [256], [0,256])
    plt.plot(hist, color = col)
    plt.xlim([0,256])

plt.show()

cv.waitKey(0)