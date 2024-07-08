#ifndef CREATIONSTRUCTURE_H
#define CREATIONSTRUCTURE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

typedef struct Directory
{
    char parent[100]; // Tamaño máximo para el nombre del directorio padre
    char name[100];   // Tamaño máximo para el nombre del directorio
} Directory;
DLL_EXPORT typedef struct Directory Directory;
DLL_EXPORT Directory *captureDirectories(int *numDirectories);
DLL_EXPORT void printDirectories(Directory *directories, int numDirectories);
DLL_EXPORT void createInPath(int directoriesNum, char **newDirectories, char dir[]);
DLL_EXPORT void treeCreation(int directoriesNum, char **newDirectories, char dir[], Directory *treeDirectories, int numTrees);
DLL_EXPORT char readYN();
DLL_EXPORT void clear_input_buffer();


#ifdef __cplusplus
}
#endif

#endif /* CREATIONSTRUCTURE_H */
