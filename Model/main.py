from darts.engines import value_vector, redirect_darts_output, sim_params
from model_co2 import Model
import pandas as pd

import matplotlib.pyplot as plt

redirect_darts_output('out.log')
m = Model()
m.init()
m.set_wells()
m.export_pro_vtk()

for a in range(10):
    m.run_python(365)
    m.export_pro_vtk()
m.print_timers()
m.print_stat()

m.wells4ParaView('well_gen.txt')

time_data = pd.DataFrame.from_dict(m.physics.engine.time_data)
time_data.to_pickle("darts_time_data.pkl")

writer = pd.ExcelWriter('time_data.xlsx')
time_data.to_excel(writer, 'Sheet1')
writer.save()

# rate plotting
td = pd.read_pickle("darts_time_data.pkl")
str = ['BRT_02_S2_PROD : wat rate', 'BRT_02_S2_PROD : gas rate']
for string in str:
    ax1 = td.plot(x='time', y=[col for col in td.columns if string in col])

plt.show()
