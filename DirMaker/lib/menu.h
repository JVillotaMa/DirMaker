#ifndef MENU_H
#define MENU_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


DLL_EXPORT short menu();
DLL_EXPORT void help();

    
#ifdef __cplusplus
}
#endif

#endif /* MENU_H */

