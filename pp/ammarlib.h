#ifndef AMMARLIB_H
#define AMMARLIB_H

#include <string>

namespace AmmarLib {
    std::string encryptText(const std::string& text);
    std::string decryptText(const std::string& text);
    void showLoadingBar();
    void processText();
}

#endif
