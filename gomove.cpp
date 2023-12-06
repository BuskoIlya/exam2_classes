#include "gomove.hpp"

IBusko::GoMove::GoMove() {
    std::cout << "GoMove()" << std::endl;
    x = 0;
    y = 0;
}

IBusko::GoMove::GoMove(const int x, const int y) {
    std::cout << "GoMove(const int x, const int y)" << std::endl;
    this->x = x;
    this->y = y;
}

IBusko::GoMove::GoMove(const GoMove& move) {
    std::cout << "GoMove(const GoMove& move)" << std::endl;
    x = move.x;
    y = move.y;
}

int IBusko::GoMove::getx() const { return x; }
int IBusko::GoMove::gety() const { return y; }

const IBusko::GoMove& IBusko::GoMove::operator = (const GoMove &move) {
    std::cout << "operator =" << std::endl;
    if (this == &move) return *this;
    x = move.x;
    y = move.y;
    return *this;
}

std::ostream& IBusko::operator << (std::ostream &os, const GoMove &move) {
    os << "Координата хода"
       << " по х = " << move.getx()
       << " по y = " << move.gety();
    return os;
}
