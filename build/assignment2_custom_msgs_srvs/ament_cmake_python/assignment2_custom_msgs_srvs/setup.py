from setuptools import find_packages
from setuptools import setup

setup(
    name='assignment2_custom_msgs_srvs',
    version='0.0.0',
    packages=find_packages(
        include=('assignment2_custom_msgs_srvs', 'assignment2_custom_msgs_srvs.*')),
)
