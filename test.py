import setuptools
from setuptools import setup, Extension, distutils, Command, find_packages
import setuptools.command.build_ext
import setuptools.command.install
import distutils.command.build
import distutils.command.clean
if 1:
  # cwrap depends on pyyaml, so we can't import it earlier
            from tools.cwrap import cwrap
            from tools.cwrap.plugins.THPPlugin import THPPlugin
            from tools.cwrap.plugins.THPLongArgsPlugin import THPLongArgsPlugin
            from tools.cwrap.plugins.ArgcountSortPlugin import ArgcountSortPlugin
            from tools.cwrap.plugins.AutoGPU import AutoGPU
            cwrap('torch/csrc/generic/TensorMethods.cwrap', plugins=[
                THPLongArgsPlugin(), THPPlugin(), ArgcountSortPlugin(), AutoGPU()
            ])
            # It's an old-style class in Python 2.7...
            setuptools.command.build_ext.build_ext.run(self)
class build_ext(setuptools.command.build_ext.build_ext):
    def run(self):
            # cwrap depends on pyyaml, so we can't import it earlier
            from tools.cwrap import cwrap
            from tools.cwrap.plugins.THPPlugin import THPPlugin
            from tools.cwrap.plugins.THPLongArgsPlugin import THPLongArgsPlugin
            from tools.cwrap.plugins.ArgcountSortPlugin import ArgcountSortPlugin
            from tools.cwrap.plugins.AutoGPU import AutoGPU
            cwrap('torch/csrc/generic/TensorMethods.cwrap', plugins=[
                THPLongArgsPlugin(), THPPlugin(), ArgcountSortPlugin(), AutoGPU()
            ])
            # It's an old-style class in Python 2.7...
            setuptools.command.build_ext.build_ext.run(self)
aaa=build_ext().run()
print(aaa)