#include "Mp3Processor.h"
#include <iostream>

int main(int argc, char * argv[]){
    printf("Testing mp3 to wav conversion!\n");
    Mp3Processor mp3P;
    if(argc != 2){
        printf("please specify location of mp3 file\n");
        exit(0);
    }
    
    std::string fileName(argv[1]);
    std::cout << fileName << std::endl;
    FILE * wavHandle = mp3P.ConvertToWav(fileName);
    if(wavHandle == NULL){
        printf("handle is NULL\n");
        exit(0);
    }
    printf("seems alright\n");


}

