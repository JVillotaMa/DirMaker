#ifndef UI_H
#define UI_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


DLL_EXPORT int selectFolder(char *selectedPath);
DLL_EXPORT int selectFile(char *selectedFile);

#ifdef __cplusplus
}
#endif

#endif /* UI_H */

