#pragma once

#include <iostream>

namespace IBusko {
    class Text {
    public:
        static const char END = '\0';
    private:
        char *value;
        int size;
    public:
        Text();
        Text(const char *const text);
        Text(const Text& text);
        ~Text();

        void get_text(char* &resul) const;

        const Text& operator = (const Text &text);
    private:
        int get_size(const char *const text) const;
    };

    std::ostream& operator << (std::ostream &os, const Text &text);
}
