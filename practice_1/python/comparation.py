import sys
import os.path as op
import time
import json

sys.path.append(op.dirname(op.dirname(op.dirname(op.abspath(__file__)))))
workspace = op.dirname(op.dirname(op.dirname(op.abspath(__file__))))


import pandas as pd
import json
import matplotlib.pyplot as plt
import glob
from practice_1.python.utils import get_data_experiments_dict

evaluation_result_json = "./practice_1/python/evaluation_time_final.json"
evaluation_results_dict = json.load(open(evaluation_result_json, "rb"))["c++"]
# print(evaluation_results_dict)

df = pd.DataFrame.from_dict(evaluation_results_dict)
for col in df.columns:
    df[col] = df[col]*1000 + 0.00001
print(df)
df.index = list(map(int, df.index))
df = df.sort_index()


## DRAW COMPARATION PYTHON

ax = df.plot(logy=True, sort_columns=True, legend=True)
ax.set_xlabel("# Numbers to sort")
ax.set_ylabel("MiliSeconds - Execution Time")
plt.show()


### CALCULATE C++
#
# final_dict = {}
# python_dict = json.load(open("./practice_1/python/evaluation_time.json", "rb"))
# final_dict["python"] = python_dict

# ## DRAW C++
# cpp_dict = {}
# for txt in glob.glob("./practice_1/c++/RESULTADOS/*.txt"):
#     experiment = txt.split("/")[-1].split("-")[0].split(".")[0]
#     print(experiment)
#     df = pd.read_csv(txt, header=None).sort_values([0])
#     df = df.set_index(df[0])
#     # df.columns = ["time"]
#     dict = json.loads(df[[1]].to_json(orient="columns"))["1"]
#     cpp_dict[experiment] = dict
#     # print(dict)

# final_dict["c++"] = cpp_dict
# with open("./practice_1/python/evaluation_time_final.json", 'w') as outfile:
#     json.dump(final_dict, outfile)




