#pragma once

#include <iostream>

namespace IBusko {
    class GoMove {
        int x;
        int y;
    public:
        GoMove();
        GoMove(const int x, const int y);
        GoMove(const GoMove& move);

        int getx() const;
        int gety() const;

        const GoMove& operator = (const GoMove &move);
    };

    std::ostream& operator << (std::ostream &os, const GoMove &move);
}
