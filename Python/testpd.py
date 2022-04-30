import pandas as pd
import requests

r = requests.get("https://en.wikipedia.org/wiki/Coronavirus")

data = pd.read_html(r.text)
data[1] = data[1].drop(17)

print(data[1])
