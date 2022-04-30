import numpy as np
import cv2 as cv
import os

haar = cv.CascadeClassifier("haar_face.xml")

p = []

for i in os.listdir(r'C:\Users\dbaks\OneDrive\Desktop\desktop\programming\python\opencv\train'):
    p.append(i)

# features = np.load('features.npy')
# labels = np.load('labels.npy')

face_recog = cv.face.LBPHFaceRecognizer_create()
face_recog.read('face_trained.yml')

DIR = "C:/Users/dbaks/OneDrive/Desktop/desktop/programming/python/opencv/val"
img = cv.imread(r'C:\Users\dbaks\OneDrive\Desktop\desktop\programming\python\opencv\val\ben_afflek\httpafilesbiographycomimageuploadcfillcssrgbdprgfacehqwMTENDgMDUODczNDcNTcjpg.jpg')

def tell(img):
    gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)

    # detect the face
    faces = haar.detectMultiScale(gray, 1.1, 4)

    for(x,y,w,h) in faces:
        face_roi = gray[y:y+h, x:x+h]

        label, conf = face_recog.predict(face_roi)
        print(f'label = {p[label]} with a confidence of {conf}')

        cv.putText(img, str(p[label]), (20,20),cv.FONT_HERSHEY_COMPLEX,1.0,(0,255,0),thickness=2)
        cv.rectangle(img, (x,y), (x+w,y+h),(0,255,0),thickness=2)

    cv.imshow('detected', img)

for person in p:
    path = os.path.join("hello")
    path = os.path.join(DIR, person)
    for img in os.listdir(path):
        img_path = os.path.join(path, img)
        img_arr = cv.imread(img_path)
        tell(img_arr)
        cv.waitKey(0)