import threading
import requests as re

def req(): 
    for i in range(100):
        a= re.get("https://www.fresources.tech/")
        print(a.status_code)

for i in range(10):
    t = threading.Thread(target=req)
    t.start()
