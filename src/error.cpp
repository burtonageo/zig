#include "error.hpp"

const char *err_str(int err) {
    switch ((enum Error)err) {
        case ErrorNoMem: return "out of memory";
        case ErrorInvalidFormat: return "invalid format";
    }
    return "(invalid error)";
}