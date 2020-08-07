#pragma once
#include <Windows.h>


namespace EXE2DLL{



    class RelocBlockCallback
    {
    public:
        RelocBlockCallback(bool _is64bit)
            : is64bit(_is64bit)
        {
        }

        virtual bool processRelocField(ULONG_PTR relocField) = 0;

    protected:
        bool is64bit;
    };


}
