# Fast Positioning Encrypt Protocol ver 0.4 Alpha
<p>Fast Positioning Encrypt Protocol</p>

<p>Fast Positioning Encrypt Protocol is freeware encrypt protocol. You can use it in comercial use but you have to mention that you are using this protocol.</p>

 Protocol is in early development and specification can change in the future. Present version is 0.4 Alpha. Source code was written in C++ code and works on x86-64 based computers system. 
 
## 1.Specification:

<p> Algorithm use password which is string of text to generate encryption key. Key can be saved to file to faster decryption. Besides password algorithm use also position variable (x and y) so base of programmer implementation any program can use diffrent keys which diffrent position (Program A can has other position than Program B so Progarm A can't use  Program B keys and vice versa). Moreover FPEP has other modifiiers which is bit shift. Bits of key can be shifted in left or right. Next file is divided to 8 byte blocks. After that blocks are sequentially encrypting and saving to output file.</p>

## 2.Function:
      
    1) generate_encrypt_key
      - Function generate encrypt key
    •   Arguments: string input,int phases,long double x=1.f,long double y=1.f,int bitleftshift=0,int  bitrightshift=0
    • Returns unsigned long long* - table which contains encrypt key

    • input – password which is used to generate encrypt key

    • phases – define a length of key (in number)

    • x- position x of key (in range of (0,1>) by default is 1.

    • y- position y of key (in range of (0,1>) by default is 1
      .
    • bitleftshift- left bit shift of key (in number) by default is 0 (no shifting)
      
    • bitrightshift- right bit shift of key (in number) by default is 0 (no shifting)

    
    2) encryptfile 
      -Function encrypt file
    • Arguments:string in,string out,unsigned long long* key,int phase
      
    • Returns: Notthing
      
    • in- file path of input file
      
    • out-file path of output file
      
    • key- encrypt key
      
    • phase- length of encrypt key (in number)


    3) decryptfile
       -Function decrypt file
    • Arguments:string in,string out,unsigned long long* key,int phase
      
    • Returns: Notthing
      
    • in- file path of input file
      
    • out-file path of output file
      
    • key- encrypt key
      
    • phase- length of encrypt key (in number)

    4) loadkey
       -Function is loading key from file
    • Arguments:string filepath,float* version
      
    • Returns: encrypt key (in unsigned long long*)
      
    • filepath- file path to the encrypt key file
      
    • version- pointer to float which is returning version of algorithm
      
    5) savekey
       -Function is saving key to file
    • Arguments:string filepath,unsigned long long *key,int phases,long double x=1.f,long double y=1.f,int bitleftshift=0,int bitrightshift=0
      
    • phases – define a length of key (in number)
      
    • x- position x of key (in range of (0,1>) by default is 1.
      
    • y- position y of key (in range of (0,1>) by default is 1
      .
    • bitleftshift- left bit shift of key (in number) by default is 0 (no shifting)
      
    • bitrightshift- right bit shift of key (in number) by default is 0 (no shifting)
      
    • filepath- file path to the file

## 3.Files:

   • FPEP.exe - demo app
    
   • FPEP.hpp - library of project
    
   • FPEP.dll - dll of project
    
   • libFPEP.a - linking file of project
    
 

