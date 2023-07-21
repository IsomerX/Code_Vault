import cv2 as cv

print("hell1o")

img = cv.imread(r'C:\Users\dbaks\OneDrive\Pictures\trainer\Photos\1.jpg')
cv.imshow('Person', img)

grey = cv.cvtColor(img, cv.COLOR_BGR2GRAY)

haar = cv.CascadeClassifier("haar_face.xml")

faces = haar.detectMultiScale(grey, scaleFactor = 0.4, minNeighbors = 2)

# cv.rectangle(grey, (0,0), (250,250),(0,255,0),thickness=cv.FILLED)

print(f'no. of faces = {len(faces)}')

for i in faces:
    cv.rectangle(grey, (i[0], i[1]), (i[2], i[3]), (0,255,0), thickness = 2)

cv.imshow('Person', grey)

cv.waitKey(0)