from setuptools import find_packages, setup

package_name = 'fibonacci'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'action_server = fibonacci.action_server:main',
            'action_client = fibonacci.action_client:main',
            'action_server2 = fibonacci.action_server2:main',
            'action_client2 = fibonacci.action_client2:main',
            'action_server3 = fibonacci.action_server3:main',
            'cancel_client = fibonacci.cancel_client:main',
        ],
        
    },
)
