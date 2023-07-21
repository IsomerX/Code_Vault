<<<<<<< HEAD
import time as t
import math as m
import numpy
from numpy import float64
import os
h=1.0
u=1.0
t1=open("Target_Location (1).txt","r")
q=t1.read()
for j in range(len(q)):
    if q[j]==',':
        lat=float(q[0:j])
        long=float(q[j+2:])
d1=open("mission_start (1).txt","r")
i=d1.read().split()
lat1=float(i[0][0:len(i[0])-1])
long1=float(i[1][0:len(i[1])-1])
H=float(i[2][0:len(i[2])])
print(lat1,long1,H,lat,long)
def projectile(x):
    p=0.2#air density in kg/n3
    k=0.1#coefficient of air drag
    r=1.0#radius of spherical payload
    A=(m.pi)(r*2)#area of spherical payload
    l=1.5#mass of spherical payload
    c=(p*k*A)/(2.0*l)
    vx=5
    vy=5
    R=0.0
    y=x
    t=0.001
    while True:
        ax=n.float128(-(c*(vx)(((vx2)+(vy2))*(1.0/2.0))))
        ay=n.float128(-9.806-(c*(vy)(((vx2)+(vy2))*(0.5))))
        R=float(R+vx*t+(0.5)(ax)((t)**2.0))
        y=float(y+vy*t+(0.5)(ay)((t)**2.0))
        if y>=(-21.0) and y<=(-19.0):
            return(R)
        vx=vx+ax*t
        vy=vy+vy*t
def g(a):
    return(a*((m.pi)/180.0))
def haversine(a1,b1,a2,b2):
    angle=2*(m.asin((((m.sin(g((a1-a2)/2)))*2)+((m.cos(g(a1)))(m.cos(g(a2))))((m.sin(g((b1-b2)/2)))2))*(1/2)))
    return(angle*6371.1)
D=(haversine(lat,long,lat1,long1))*1000.0
x=0.0

while True:
    R=projectile(x)
    if x+R>=((D)-100) and x+R<=((D)+100):
        print("latitude=",((lat*x)+(lat1*(D-x)))/D," Longitude=",(long*x)+(long1*(D-x))/D)
        print(x,R,D)
        print("payload is dropped")
        break
=======
import time as t
import math as m
import numpy
from numpy import float64
import os
h=1.0
u=1.0
t1=open("Target_Location (1).txt","r")
q=t1.read()
for j in range(len(q)):
    if q[j]==',':
        lat=float(q[0:j])
        long=float(q[j+2:])
d1=open("mission_start (1).txt","r")
i=d1.read().split()
lat1=float(i[0][0:len(i[0])-1])
long1=float(i[1][0:len(i[1])-1])
H=float(i[2][0:len(i[2])])
print(lat1,long1,H,lat,long)
def projectile(x):
    p=0.2#air density in kg/n3
    k=0.1#coefficient of air drag
    r=1.0#radius of spherical payload
    A=(m.pi)(r*2)#area of spherical payload
    l=1.5#mass of spherical payload
    c=(p*k*A)/(2.0*l)
    vx=5
    vy=5
    R=0.0
    y=x
    t=0.001
    while True:
        ax=n.float128(-(c*(vx)(((vx2)+(vy2))*(1.0/2.0))))
        ay=n.float128(-9.806-(c*(vy)(((vx2)+(vy2))*(0.5))))
        R=float(R+vx*t+(0.5)(ax)((t)**2.0))
        y=float(y+vy*t+(0.5)(ay)((t)**2.0))
        if y>=(-21.0) and y<=(-19.0):
            return(R)
        vx=vx+ax*t
        vy=vy+vy*t
def g(a):
    return(a*((m.pi)/180.0))
def haversine(a1,b1,a2,b2):
    angle=2*(m.asin((((m.sin(g((a1-a2)/2)))*2)+((m.cos(g(a1)))(m.cos(g(a2))))((m.sin(g((b1-b2)/2)))2))*(1/2)))
    return(angle*6371.1)
D=(haversine(lat,long,lat1,long1))*1000.0
x=0.0

while True:
    R=projectile(x)
    if x+R>=((D)-100) and x+R<=((D)+100):
        print("latitude=",((lat*x)+(lat1*(D-x)))/D," Longitude=",(long*x)+(long1*(D-x))/D)
        print(x,R,D)
        print("payload is dropped")
        break
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
    x=x+10.0