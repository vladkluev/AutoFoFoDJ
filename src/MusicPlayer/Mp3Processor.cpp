/* Uses the LAME decoder to extract the mp3 file into 
 * wav, uses the command line utility for now. TODO: make async with popen*/
#include "Mp3Processor.h"


    
Mp3Processor::Mp3Processor()
{
    available = 1;
     if (system(NULL)) puts ("Ok to test");
     else exit (EXIT_FAILURE); 
}

/* converts an mp3File to Wav and returns the file handle, the caller is responsible for 
* closing */ 
FILE * Mp3Processor::ConvertToWav(std::string fileName)
{
    printf("converting! available = %i\n", available);
    if(available)
    {
        available = 0;
        char fullCommand[fileName.length() + commandString.length()];
        sprintf(fullCommand, commandString.c_str(), fileName.c_str());
        printf("%s\n", fullCommand);
        system(fullCommand);
        available = 1; 
        return fopen("tempFile.wav" , "r");
    }
    else{
        return NULL;
    }
}

