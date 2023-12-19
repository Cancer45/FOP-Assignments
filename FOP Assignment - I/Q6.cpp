#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int height;
    int speed;
    int accel;
    int dist;
    int mass;
    
    cout << "This program will assume that the aircraft is flying level towards the target. It will also assume no air resistance. All measurements are in standard units." << endl;
    cout << "Please Input Height: " ;
    cin >> height;
    cout << endl;
    cout << "Please Input Speed: " ;
    cin >> speed;
    cout << endl;
    cout << "Please Input Acceleration: " ;
    cin >> accel;
    cout << endl;
    cout << "Please Input Distance from Target: " ;
    cin >> dist;
    cout << endl;
    
    // calculate time taken for vertical fall if released now
    int time_vert = sqrt ((2 * (height)) / accel);
    
    if (time_vert <= 0)
    {
        cout << "wrong values entered, ERROR!";
        return 1;
    }
    
    // calculate horizontal distance travelled if released now before hitting ground
    int hor_dist = (speed * time_vert) + (0.5 * accel * (pow (time_vert, 2)));
    
    // calculate the acceleration required
    int accel_req = (((dist - (speed * time_vert)) * 2) / pow (time_vert, 2));
    
    // calculate difference in acceleration
    int accel_diff = accel_req - accel;
    
    if (accel_diff > 0)
    {
        // acceleration is required
        cout << "Increase Acceleration to " << accel_req << " m/s^2 and drop payload.";
    }
    
    else if (accel_diff < 0)
    {
        // deceleration is required
        cout << "Decrease Acceleration to " << accel_req << " m/s^2 and drop payload.";
    }
    
    else
    {
        cout << "Release Now!";
    }
    
    

    return 0;
}
