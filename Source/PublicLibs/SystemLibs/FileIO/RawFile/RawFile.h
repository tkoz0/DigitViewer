/* RawFile.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 03/19/2018
 * Last Modified    : 03/24/2018
 * 
 *      RawFile is a file with direct and unbufferred I/O.
 * 
 */

#pragma once
#ifndef ymp_FileIO_RawFile_H
#define ymp_FileIO_RawFile_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#if _WIN32
#include "RawFile_Windows.h"
#else
#include "RawFile_Linux.h"
#endif
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#endif
