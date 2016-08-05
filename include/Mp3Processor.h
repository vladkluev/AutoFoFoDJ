#pragma once
#include <stdio.h>
#include <string>

class Mp3Processor{
    private:
        bool available;
        std::string commandString = "lame --mp3Input %s --decode tempFile.wav";

    public:
        Mp3Processor();
        FILE * ConvertToWav(std::string fileName);


};

