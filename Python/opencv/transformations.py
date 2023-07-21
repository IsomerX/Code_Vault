import cv2 as cv
import time

img = cv.imread('images/2.jpg')

cv.imshow('cat', img)

# translation
def translate(img, x, y):
    tra = np.float32([[1,0,x],[0,1,y]])
    dim = (img.shape[1], img.shape[0])
    return cv.warpAffine(img, tra, dim)

true = translate(img, 500,500)
cv.imshow("translated", true)

# rotation
def rotate(img, angle, point = None):
    (height, width) = (img.shape[1], img.shape[0])
    if point is None:
        point = (width//2,height//2)

    rotmat = cv.getRotationMatrix2D(point, angle,1)
    dim = (width, height)
    return cv.warpAffine(img, rotmat, dim)

rotated = rotate(img, 0)
cv.imshow("rotated", rotated)

# vela testing 2.0
# for i in range(0,91):
#     ro = rotate(img,i)
#     cv.imshow(f"rotated {i}", ro)
#     if cv.waitKey(10) & 0xFF==ord('d'):
#         break
#     # time.sleep(0.24)
#     # cv.destroyAllWindows()

# flip
flip = cv.flip(img, 0)
cv.imshow("vertical flip",flip)

flip2 = cv.flip(img, 1)
cv.imshow("horizontal flip",flip2)

flip3 = cv.flip(img, -1)
cv.imshow("both flip",flip3)

cv.waitKey(0)