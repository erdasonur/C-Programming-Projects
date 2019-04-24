
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

template <typename Type>
void remove_duplicate(std::vector<Type>& vec) {
    std::sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

enum class Direction {
    Stopped, Up, Down
};

class Elevator {
    Direction _direction;
    int _floor;
    int _max_floor;
    vector<int> _destinations;

public:
    Elevator(int max_floor = 10, int floor = 0) {
        _direction = Direction::Up;
        _floor = floor;
        _max_floor = max_floor;
    }

    Direction getDirection() {
        return _direction;
    }

    int getFloor() {
        return _floor;
    }

    int getMaxFloor() {
        return _max_floor;
    }

    vector<int> getDestinations() {
        return _destinations;
    }

    void action(int floor) {
        if (floor != _floor)
            _destinations.push_back(floor);
        remove_duplicate(_destinations);
    }


    void move() {
        int next = -1;
        if (_direction == Direction::Up) {
            next = checkUpper();
            if (next == -1)
                next = checkLower();
        } else {
            next = checkLower();
            if (next == -1)
                next = checkUpper();
        }
        if (next == -1) {
            cout << "Current Floor: " << _floor << " Nothing done!" << endl;
            _direction = Direction::Stopped;
            return;
        }
        int next_floor = _destinations[next];
        cout << "Current Floor: " << _floor << " Going: " << next_floor << endl;
        if (next_floor > _floor) {
            _floor++;
            _direction = Direction::Up;
        } else {
            _floor--;
            _direction = Direction::Down;
        }
        if (next_floor == _floor) {
            _destinations.erase(_destinations.begin() + next);
        }
    }

    void printDestinations() {
        cout << "Next Floors: ";
        for (auto destination : getDestinations()) {
            cout << destination << " ";
        }
        cout << endl;
    }

private:

    int checkUpper() {
        int i = 0, next = -1;
        for (auto floor : _destinations) {
            if (floor > _floor && (next == -1 || floor < _destinations[next])) {
                next = i;
            }
            i++;
        }
        return next;
    }

    int checkLower() {
        int i = 0, next = -1;
        for (auto floor : _destinations) {
            if (floor < _floor && (next == -1 || floor > _destinations[next])) {
                next = i;
            }
            i++;
        }
        return next;
    }
};



int main() {
    Elevator elevator;
    elevator.printDestinations();
    elevator.action(5);
    elevator.action(1);
    elevator.action(3);
    elevator.action(5);
    elevator.action(5);
    elevator.action(5);
    elevator.action(5);
    elevator.printDestinations();
    elevator.move();
    elevator.move();
    elevator.action(0);
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.move();
    elevator.printDestinations();

    return 0;
}
