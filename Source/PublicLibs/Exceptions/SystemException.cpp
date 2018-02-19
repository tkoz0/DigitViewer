/* SystemException.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 04/09/2017
 * Last Modified    : 04/09/2017
 * 
 */

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#include "PublicLibs/ConsoleIO/BasicIO.h"
#include "PublicLibs/ConsoleIO/Label.h"
#include "PublicLibs/ExportSafeLibs/Stream.h"
#include "SystemException.h"
namespace ymp{
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
const char SystemException::TYPENAME[] = "SystemException";
ExceptionFactoryT<SystemException> SystemException_Instance;
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
YM_NO_INLINE SystemException::SystemException(const char* function, const char* message, int code)
    : m_function(function)
    , m_message(message)
    , m_code(code)
{}
YM_NO_INLINE SystemException::SystemException(const char* function, std::string message, int code)
    : m_function(function)
    , m_message(std::move(message))
    , m_code(code)
{}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void SystemException::print() const{
    Console::println("\n", 'R');
    Console::println_labelc("System Exception Encountered", get_typename());
    Console::println();
    if (!m_function.empty()){
        Console::println_labelm("In Function:", m_function);
    }
    Console::println_labelm("Error Code: ", m_code);
    Console::println();
    Console::println(m_message);
    Console::println("\n");
    Console::SetColor('w');
}
SystemException::SystemException(const DllSafeStream& data){
    const char* str = (const char*)data.get() + sizeof(TYPENAME);

    m_function = str;
    str += m_function.size() + 1;

    m_message = str;
    str += m_message.size() + 1;

    memcpy(&m_code, str, sizeof(m_code));
}
DllSafeStream SystemException::serialize() const{
    upL_t function_size = m_function.size() + 1;
    upL_t message_size = m_message.size() + 1;

    DllSafeStream ptr(sizeof(TYPENAME) + function_size + message_size + sizeof(m_code));
    char* str = (char*)ptr.get();
    memcpy(str, TYPENAME, sizeof(TYPENAME));
    str += sizeof(TYPENAME);

    memcpy(str, &m_function.front(), function_size);
    str += function_size;

    memcpy(str, &m_message.front(), message_size);
    str += message_size;

    memcpy(str, &m_code, sizeof(m_code));

    return ptr;
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}