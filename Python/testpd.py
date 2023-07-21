<<<<<<< HEAD
import pandas as pd
import requests

r = requests.get("https://en.wikipedia.org/wiki/Coronavirus")

data = pd.read_html(r.text)
data[1] = data[1].drop(17)

print(data[1])
=======
import pandas as pd
import requests

r = requests.get("https://en.wikipedia.org/wiki/Coronavirus")

data = pd.read_html(r.text)
data[1] = data[1].drop(17)

print(data[1])
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
