#ifndef CONFIG_H_IN
#define CONFIG_H_IN

// Directory structure of SVF build
#define SVF_ROOT "/home/jackie/project/SVF"
#define SVF_BUILD_DIR "/home/jackie/project/SVF"
#define SVF_INSTALL_DIR "/usr/local"
#define SVF_BIN_DIR "/usr/local/bin"
#define SVF_LIB_DIR "/usr/local/lib"
#define SVF_INCLUDE_DIR "/usr/local/include"
#define SVF_EXTAPI_DIR "/usr/local/lib"
#define SVF_EXTAPI_BC "/usr/local/lib/extapi.bc"

// Build mode used to build SVF
#define SVF_BUILD_TYPE "Debug"

// Sanitiser mode used for building SVF
/* #undef SVF_SANITIZE */

// Build options used when building SVF
/* #undef SVF_COVERAGE */
#define SVF_WARN_AS_ERROR
/* #undef SVF_EXPORT_DYNAMIC */
/* #undef SVF_ENABLE_ASSERTIONS */

#endif // CONFIG_H_IN
