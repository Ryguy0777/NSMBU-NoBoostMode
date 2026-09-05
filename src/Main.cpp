#include <noboostmode/NoBoostMode.h>

red::Registrar* noboostmode::getRegistrar() {
    static red::Registrar sRegistrar("noboostmode");
    return &sRegistrar;
}

void main() { }
