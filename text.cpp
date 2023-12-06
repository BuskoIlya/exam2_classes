#include "text.hpp"

IBusko::Text::Text() {
    std::cout << "Text()" << std::endl;
    value = nullptr;
    size = 0;
}

IBusko::Text::Text(const char *const text) : Text() {
    std::cout << "Text(const char *text)" << std::endl;

    if (!text) return;

    size = get_size(text);
    value = new char[size + 1];
    for (int i = 0; i < size; i++) {
        value[i] = text[i];
    }
    value[size] = Text::END;
}

IBusko::Text::Text(const Text& text) : Text() {
    std::cout << "Text(const Text& text)" << std::endl;

    if (!text.value) return;

    size = text.size;
    value = new char[size + 1];
    for (int i = 0; i < size; i++) {
        value[i] = text.value[i];
    }
    value[size] = Text::END;
}

IBusko::Text::~Text() {
    std::cout << "~Text()" << std::endl;
    if (value) delete[] value;
    std::cout << "END OF ~Text()" << std::endl;
}

void IBusko::Text::get_text(char* &result) const {
    if (!value) return;

    result = new char[size + 1];
    for (int i = 0; i < size; i++) {
        result[i] = value[i];
    }
    result[size] = Text::END;
}

const IBusko::Text& IBusko::Text::operator = (const Text &text) {
    std::cout << "operator =" << std::endl;
    
    if (this == &text) return *this;
    if (value) delete[] value;

    if (text.value) {
        value = text.value;
        size = text.size;
    } else {
        value = nullptr;
        size = 0;
    }

    return *this;
}

std::ostream& IBusko::operator << (std::ostream &os, const Text &text) {
    char *result = nullptr;
    text.get_text(result);
    if (result) {
        os << result;
        delete[] result;
    } else {
        os << Text::END;
    }
    return os;
}

int IBusko::Text::get_size(const char *const text) const {
    int i = 0;
    while (text[i] != END) {
        i++;
    }
    return i;
}
