#ifndef AMMAR_LIB_H
#define AMMAR_LIB_H

#include <string>

namespace AmmarLib {

    void showLoadingBar(int duration);

    std::string encryptText(const std::string& text);

    std::string decryptText(const std::string& text);

}  // namespace AmmarLib

#endif  // AMMAR_LIB_H
