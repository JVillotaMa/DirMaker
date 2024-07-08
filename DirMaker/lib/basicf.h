#ifndef BASICF_H
#define BASICF_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

#define MAX_PATH 260
#define MAX_FILE_SIZE 1000000

DLL_EXPORT short readShort();
DLL_EXPORT void clear_input_buffer();
DLL_EXPORT void replaceBackslash(char *str);
DLL_EXPORT int empty(char selectedPath[MAX_PATH], char selectedFile[MAX_FILE_SIZE]);
DLL_EXPORT int is_numeric(const char *str);

DLL_EXPORT char readYN();


#ifdef __cplusplus
}
#endif

#endif /* BASICF_H */

