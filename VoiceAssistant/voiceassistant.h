#ifndef VOICEASSISTANT_H
#define VOICEASSISTANT_H

#include <iostream>

#include "VoiceAssistantConfig.h"


class VoiceAssistant : public VoiceAssistantConfig
{
private:
    void ReadWav();
    void SpeechToWav(std::string str);
    std::string WavToSpeech();

public:
    VoiceAssistant();
    static void Timetable();
};

#endif // VOICEASSISTANT_H
