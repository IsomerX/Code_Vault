import pandas as pd
from pandas_profiling import ProfileReport

test = pd.read_csv(r"pandas\train.csv")

profile = ProfileReport(test, title="Pandas Profiling Report", explorative=True)
profile.to_file("dhruv.html")