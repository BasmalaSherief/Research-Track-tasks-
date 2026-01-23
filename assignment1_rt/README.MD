# Research Track I - Assignment 1
  

## Description
This package (`assignment1_rt`) implements a control system for the Turtlesim simulation using ROS 2 (C++). It satisfies the requirements for Assignment 1 of the Research Track I course.

The project consists of three main components:

1. **UI Node**  
   A C++ controller that allows the user to send velocity commands (Linear X, Angular Z) to a specific turtle. It includes a 1-second movement timer for safe control.

2. **Distance Monitor Node**  
   A C++ safety node that monitors the position of two turtles. It computes the Euclidean distance between them and checks boundary limits. If turtles get too close or approach the environment edges, the node stops movement or enables safe reverse behavior.

3. **Launch File**  
   A ROS 2 launch file that starts the simulation, spawns the second turtle, and runs both the distance monitor and UI controller nodes together.

---

## Installation and Build

Build the package inside your ROS 2 workspace:

```bash
cd ~/ros2_ws
colcon build --packages-select assignment1_rt
source install/setup.bash
```

---

## How to Run

### **Option 1: Using Launch File**

A launch file is provided to start the entire assignment at once.

```bash
ros2 launch assignment1_rt simulation.launch.xml
```

This will:
- Start the Turtlesim simulation
- Spawn the second turtle
- Start the distance monitor node
- Start the UI controller node

---

### **Option 2: Manual Execution**

Run the following commands in **separate terminals**:

#### **1. Start Simulation**
```bash
ros2 run turtlesim turtlesim_node
```

#### **2. Spawn Second Turtle**
```bash
source install/setup.bash
python3 src/assignment1_rt/src/turtle_spawn.py
```

#### **3. Run Distance Monitor**
```bash
source install/setup.bash
ros2 run assignment1_rt DistanceControl
```

#### **4. Run UI Controller**
```bash
source install/setup.bash
ros2 run assignment1_rt UI
```

---

## Files Description

| File | Description |
|------|-------------|
| `src/UI.cpp` | C++ node that handles user input and publishes `cmd_vel` velocity commands. It includes a 1-second automatic stop timer. |
| `src/distance_node.cpp` | C++ safety node that subscribes to turtle poses, computes the distance between turtles, monitors boundaries, and performs smart braking. |
| `src/turtle_spawn.py` | Python script that uses the `/spawn` service to create a second turtle in the simulation. |
| `launch/simulation.launch.xml` | Launch file that handles starting all nodes and the simulation. |

---

