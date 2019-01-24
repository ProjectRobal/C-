#ifndef __MAIN_H__
#define __MAIN_H__
#define VERSION "0.4a"

#include <windows.h>
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
/*  To use this exported function of dll, include this header
 *  in your project.
 */


#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

void DLL_EXPORT SomeFunction(const LPCSTR sometext);

int DLL_EXPORT getfilesize(string filename);

long long DLL_EXPORT inverse(long long b);

unsigned long long* DLL_EXPORT generate_encrypt_key(string input,int phases,long double x=1.f,long double y=1.f,int bitleftshift=0,int bitrightshift=0,string ver=VERSION);

void DLL_EXPORT decryptfile(string in,string out,unsigned long long* key,int phase);

void DLL_EXPORT encryptfile(string in,string out,unsigned long long* key,int phase);

bool DLL_EXPORT savekey(string filepath,unsigned long long *key,int phases,long double x=1.f,long double y=1.f,int bitleftshift=0,int bitrightshift=0);

 bool __declspec(dllexport) Debug=false;

 float* __declspec(dllexport) version;

 unsigned long long* DLL_EXPORT loadkey(string filepath,float* version);

 struct DLL_EXPORT EncryptParam
{
    int phase=10;
    long double x=1.f;
    long double y=1.f;
    int bitleftshift=0;
    int bitrightshift=0;
    float version=0.2f;
    string keypath=" ";

};

EncryptParam DLL_EXPORT params;

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
