<<<<<<< HEAD
import cv2 as cv
import numpy as np 

blank = np.zeros((500,500,3),dtype='uint8')
cv.imshow("", blank)

blank[300:] = 0,255,0
cv.imshow("", blank)

cv.rectangle(blank, (0,0), (250,250),(0,255,0),thickness=cv.FILLED)

cv.putText(blank, 'hello world', (250,200), cv.FONT_HERSHEY_TRIPLEX,1.0,(0,123,200),2)

cv.imshow("", blank)
=======
import cv2 as cv
import numpy as np 

blank = np.zeros((500,500,3),dtype='uint8')
cv.imshow("", blank)

blank[300:] = 0,255,0
cv.imshow("", blank)

cv.rectangle(blank, (0,0), (250,250),(0,255,0),thickness=cv.FILLED)

cv.putText(blank, 'hello world', (250,200), cv.FONT_HERSHEY_TRIPLEX,1.0,(0,123,200),2)

cv.imshow("", blank)
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
cv.waitKey(0)