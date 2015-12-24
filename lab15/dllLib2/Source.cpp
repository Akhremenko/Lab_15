#include <Windows.h>
#include <iostream>
#include "Lib2.h"
extern "C" __declspec(dllexport) LPWSTR getSize2()
{

	char buffer[256];
	DWORD size;
	size = sizeof(buffer);
	GetComputerName((LPWSTR)buffer, &size);
	return (LPWSTR)buffer;
}




Log2* GetPointer2()
{
	return new Log2; // возвращает указать на объект
}

Log2::Log2()
{
}
Log2::~Log2()
{
}

LPWSTR Log2::write2()
{
	char buffer[256];
	DWORD size;
	size = sizeof(buffer);
	GetComputerName((LPWSTR)buffer, &size);
	return (LPWSTR)buffer;
}
