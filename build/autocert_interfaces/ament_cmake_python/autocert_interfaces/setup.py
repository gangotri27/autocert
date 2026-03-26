from setuptools import find_packages
from setuptools import setup

setup(
    name='autocert_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('autocert_interfaces', 'autocert_interfaces.*')),
)
