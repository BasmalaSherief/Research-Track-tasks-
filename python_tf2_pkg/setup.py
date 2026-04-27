import os
from setuptools import find_packages, setup
from glob import glob

package_name = 'python_tf2_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'),
        glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='basmala',
    maintainer_email='basmalasherief17@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'simp_quat = python_tf2_pkg.simp_quat:main',
            'static_broad = python_tf2_pkg.static_broad:main',
            'broadcaster = python_tf2_pkg.broadcaster:main',
            'listener = python_tf2_pkg.listener:main',
            'carrot = python_tf2_pkg.carrot:main',
        ],
    },
)
