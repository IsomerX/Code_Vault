<<<<<<< HEAD
import cv2 as cv

# img = cv.imread('images/2.jpg')

# cv.imshow('cat', img)

# cv.waitKey(0)
cap = cv.VideoCapture(0)

# for savin the vid, uncomment the below 

# fourcc = cv.VideoWriter_fourcc(*'XVID')
# out = cv.VideoWriter('output.avi', fourcc, 20.0, (640, 480))
i=0
while True:  
    cap1,frame = cap.read()
    # cv.imshow("thresholdin it", thresh)
    
    canny = cv.Canny(frame, 125, 175)
    cv.imshow('can', canny)
    
    # blur = cv.GaussianBlur(frame, (11,11), cv.BORDER_DEFAULT)
    # cv.imshow("blur", blur)
    
    # ero = cv.erode(canny,(3,3),iterations = 1)
    # cv.imshow("erode", ero)
    
    # noty = cv.bitwise_not(frame)
    # cv.imshow("not operator", noty) 

    frama = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)
    adaptive_thresh = cv.adaptiveThreshold(frama, 255, cv.ADAPTIVE_THRESH_MEAN_C, cv.THRESH_BINARY, 11, 3)
    cv.imshow("adapt", adaptive_thresh)
    

    # save the vid by uncommenting the below 
    # out.write(thresh) 
    
    
    # save the images with below
    # cv.imwrite(str(i)+'.jpg',thresh)
    # i+=1
    if cv.waitKey(20) & 0xFF==ord('d'):
        break
    
cap.release()
=======
import cv2 as cv

# img = cv.imread('images/2.jpg')

# cv.imshow('cat', img)

# cv.waitKey(0)
cap = cv.VideoCapture(0)

# for savin the vid, uncomment the below 

# fourcc = cv.VideoWriter_fourcc(*'XVID')
# out = cv.VideoWriter('output.avi', fourcc, 20.0, (640, 480))
i=0
while True:  
    cap1,frame = cap.read()
    # cv.imshow("thresholdin it", thresh)
    
    canny = cv.Canny(frame, 125, 175)
    cv.imshow('can', canny)
    
    # blur = cv.GaussianBlur(frame, (11,11), cv.BORDER_DEFAULT)
    # cv.imshow("blur", blur)
    
    # ero = cv.erode(canny,(3,3),iterations = 1)
    # cv.imshow("erode", ero)
    
    # noty = cv.bitwise_not(frame)
    # cv.imshow("not operator", noty) 

    frama = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)
    adaptive_thresh = cv.adaptiveThreshold(frama, 255, cv.ADAPTIVE_THRESH_MEAN_C, cv.THRESH_BINARY, 11, 3)
    cv.imshow("adapt", adaptive_thresh)
    

    # save the vid by uncommenting the below 
    # out.write(thresh) 
    
    
    # save the images with below
    # cv.imwrite(str(i)+'.jpg',thresh)
    # i+=1
    if cv.waitKey(20) & 0xFF==ord('d'):
        break
    
cap.release()
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
cv.destroyAllWindows()