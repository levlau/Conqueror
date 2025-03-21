#pragma once
#include "_Core.h"
#include "utility.h"

#include <MINIAUDIO/miniaudio.h>

namespace core {

    class Sound
    {
    private:
        std::string soundFile;
        ma_engine engine;
        ma_sound currentSound;

    public:
        Sound();
        ~Sound();
        static void DataCallback(ma_device* pDevice, void* pOutput, const void* pInput, ma_uint32 frameCount);
        bool LoadSound(std::string soundFile);
        bool SoundPlay();
        bool StopSound();
        void SetVolume(float volume);
        float GetVolume();
    };

}