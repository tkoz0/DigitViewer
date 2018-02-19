/* CompileOptions_PublicLibs.cpp
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 07/19/2015
 * Last Modified    : 07/19/2015
 * 
 */

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#include "PublicLibs/ConsoleIO/BasicIO.h"
//#include "SystemLibs/Time/Time.h"
#include "SystemLibs/FileIO/FileIO.h"
namespace ymp{
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void CompileOptions_PublicLibs(){
    Console::SetColor('T');
    Console::println("================================================================");
    Console::SetColor('Y');
    Console::println("External Library\n");
    Console::SetColor('w');

    Console::CompileOptions();
//    Time::CompileOptions();
    FileIO::CompileOptions();
    Console::println();
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
