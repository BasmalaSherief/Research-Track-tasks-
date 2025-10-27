#include <iostream>
#include <cstdlib> 
#include <ctime>

#define MAX_SPEED 1000

using namespace std;

class Robot {
public:
    string name;
    int speed;
    int max_speed;
    int energy = 100;

    Robot(string robot_name) : name(robot_name) 
    {
    cout << "Robot created!" << endl;
    speed = 0;
    energy = 100;
    max_speed = MAX_SPEED;
    }

    void increase_speed(int speed_increase) 
    {
        if (energy <= 0) {
            cout << name << " is out of energy! Resetting energy to 100." << endl;
            energy = 100;
            return;
        }

        speed += speed_increase;
        energy -= speed_increase / 10; 

        if (speed > max_speed) {
            speed = max_speed;
        }

        cout << name << " -> Speed increased by " << speed_increase
             << ". Current speed: " << speed
             << ", Energy: " << energy << endl;
    }
    bool has_finished() const 
    {
        return speed >= max_speed;
    }
};

int main(){
    srand(time(0));

    Robot robot1("Robo1");
    Robot robot2("Robot2" );

    cout << "Race starte!" << endl;

    while(true)
    {
        robot1.increase_speed(rand()%51);
        robot2.increase_speed(rand()%51);
        
        if (robot1.has_finished() || robot2.has_finished())
            break;
    }
    if (robot1.speed >= MAX_SPEED && robot2.speed >= MAX_SPEED) 
    {
        cout << "It's a tie!" << endl;
    } 
    else if (robot1.speed >= MAX_SPEED)
    {
        cout << "The winner is " << robot1.name << "!" << endl;
    }
    else
    {
        cout << "The winner is " << robot2.name << "!" << endl;
    }
    return 0;
}