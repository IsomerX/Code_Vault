# # t = int(input())
# # while(t>0):
# #     t-=1
# #     n,m = map(int, input().split())
# #     print((2**n-1)**m)
# import requests
# import pandas as pd

# # page = requests.get("https://en.wikipedia.org/wiki/COVID-19_pandemic_in_India")
# # # print(page.content)
# r = pd.read_csv('https://raw.githubusercontent.com/owid/covid-19-data/master/public/data/owid-covid-data.csv')
# print(r.columns.values)

# # p=pd.read_csv(r'C:\Users\Win_10\Desktop\python projects\country_vaccinations.csv')
# # print(p)

# import requests

# url = "https://apidojo-yahoo-finance-v1.p.rapidapi.com/auto-complete"

# querystring = {"q":"tesla","region":"US"}

# headers = {
#     'x-rapidapi-key': "665a5d11eamsh2783ec257258b12p19f49bjsnecb5de84b7aa",
#     'x-rapidapi-host': "apidojo-yahoo-finance-v1.p.rapidapi.com"
#     }

# response = requests.request("GET", url, headers=headers, params=querystring)

# print(response.text)


import yfinance as yf
tab = yf.Ticker('F').info
for i in tab:
    print(i, tab[i])
