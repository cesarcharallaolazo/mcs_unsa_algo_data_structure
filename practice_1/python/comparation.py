import sys
import os.path as op
import time
import json
import numpy as np

sys.path.append(op.dirname(op.dirname(op.dirname(op.abspath(__file__)))))
workspace = op.dirname(op.dirname(op.dirname(op.abspath(__file__))))

from practice_1.python.utils import calculate_cpp_json_exection_time
import pandas as pd
import json
import matplotlib.pyplot as plt
import glob

# calculate_cpp_json_exection_time()

evaluation_result_json = "./practice_1/python/evaluation_time_final.json"
evaluation_results_dict = json.load(open(evaluation_result_json, "rb"))["c++"]
# print(evaluation_results_dict)

df = pd.DataFrame.from_dict(evaluation_results_dict)
df.index = list(map(int, df.index))
df = df.sort_index()

# DRAW COMPARATION

ax = df.plot(logy=True, sort_columns=True, legend=True)
ax.set_xlabel("# Numbers to sort")
ax.set_ylabel("MiliSeconds - Execution Time")
plt.show()
