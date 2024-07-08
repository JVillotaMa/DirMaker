#ifndef FILEIO_H
#define FILEIO_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

#define MAX_NAMES 100

DLL_EXPORT int readNamesFromFile(const char *filename, char *names[MAX_NAMES]);
DLL_EXPORT int readNamesFromFileDelimiter(const char *filename, char **names, char delimiter[]);


#ifdef __cplusplus
}
#endif

#endif /* FILEIO_H */

