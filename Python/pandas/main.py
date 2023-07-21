<<<<<<< HEAD
import pandas as pd
from pandas_profiling import ProfileReport

test = pd.read_csv(r"pandas\train.csv")

profile = ProfileReport(test, title="Pandas Profiling Report", explorative=True)
profile.to_file("dhruv.html")

=======
import pandas as pd
from pandas_profiling import ProfileReport

test = pd.read_csv(r"pandas\train.csv")

profile = ProfileReport(test, title="Pandas Profiling Report", explorative=True)
profile.to_file("dhruv.html")

>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
profile = ProfileReport(test, title="Pandas Profiling Report", explorative=True)