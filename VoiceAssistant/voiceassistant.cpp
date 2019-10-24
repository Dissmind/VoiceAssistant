#include "voiceassistant.h"

#include <iostream>

VoiceAssistant::VoiceAssistant()
{

}

void VoiceAssistant::ReadWav(){
    std::cout << "Test";
}

std::string VoiceAssistant::WavToSpeech(){

    return "Text";
}

void VoiceAssistant::SpeechToWav(std::string str){

}

void VoiceAssistant::Timetable(){
    VoiceAssistant va;

    // Чтение с микрофона.
    va.ReadWav();

    // Перевод wav в текст.
    std::string text = va.WavToSpeech();

    // Задать вопрос "Для какой группы/преподователя вывести расписание?"
    va.SpeechToWav("Dly kakoy grupi ili prepodovatelya vivesti raspisani");

    // Чтение с микрофона.
    va.ReadWav();

    // Перевод wav в текст.
    std::string typeTimetable = va.WavToSpeech();

    //TODO: Записать данные для вывода расписания.
}
