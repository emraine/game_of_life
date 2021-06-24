//
// Created by a on 6/24/21.
//

#ifndef GAME_OF_LIFE_CELL_H
#define GAME_OF_LIFE_CELL_H

#include <array>
#include "iostream"

using namespace std;

class Cell {
public:
    Cell(bool curr_state, bool prev_state) {
        this->curr_state = curr_state;
        this->prev_state = prev_state;
    };

    /*
     *
     *
     * 1 2 3
     * 4 x 5
     * 6 7 8
     */
    bool get_curr_state() const {
        return curr_state;
    }

    bool set_curr_state(bool new_state) {
        this->curr_state = new_state;
    }

    bool set_prev_state() const {
        return prev_state;
    }

    bool get_prev_state(bool new_state) {
        this->prev_state = new_state;
    }

    friend ostream& operator<<(ostream& out, const Cell cell);
private:
    bool curr_state;
    bool prev_state;
};


#endif //GAME_OF_LIFE_CELL_H