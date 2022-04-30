import cv2 as cv 
import pandas as pd

image = cv.imread(r"Python\opencv\experimentation\assets\dhruv\1.jpg")

# print(image)

s_image = cv.resize(image, (0,0), fx = 0.5, fy = 0.5)

# cv.imshow("Dhruv", s_image)

height = len(s_image[0])
width = len(s_image)

r,g,b = [], [], []

for i in range(width):
    for j in range(height):
        r.append(s_image[i][j][2])
        g.append(s_image[i][j][1])
        b.append(s_image[i][j][0])

image_t = pd.DataFrame({"Red" : r, "Green" : g, "Blue" : b})

cv.waitKey()