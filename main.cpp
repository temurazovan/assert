#include <iostream>
#include <cassert>

float travelTime(float distance, float speed) {
    assert(distance > 0 && speed > 0);
    float travelTime = distance / speed;

    return travelTime;
}

int main() {
    float distance;
    float speed;
    std::cin >> distance >> speed;
    std::cout << travelTime(distance, speed);
}
