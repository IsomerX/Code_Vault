import cv2 as cv
import numpy as np
import xlsxwriter as xls

im = cv.imread(r'C:\Users\dbaks\OneDrive\Desktop\desktop\programming\python\opencv\images\didi.jpg')
# im = cv.resize(im, (240,163))
a,b,c = im.shape
im=cv.resize(im,(int(b/10),int(a/10)))
print(im.shape)
workbook = xls.Workbook('didi.xlsx')
worksheet = workbook.add_worksheet()
row=0
for i in im:
    col=0
    for j in i:
        for k in range(3):
            worksheet.write(3*row+k,col,j[k])
        col+=1
    worksheet.conditional_format(3*row+2,0,3*row+2,im.shape[0]+1, {'type': '2_color_scale','min_color': "#000000",'max_color': "#FF0000"})
    worksheet.conditional_format(3*row+1,0,3*row+1,im.shape[0]+1, {'type': '2_color_scale','min_color': "#000000",'max_color': "#00FF00"})
    worksheet.conditional_format(3*row,0,3*row,im.shape[0]+1, {'type': '2_color_scale','min_color': "#000000",'max_color': "#0000FF"})
    row+=1
workbook.close()
