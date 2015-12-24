#include <Windows.h>
#include <iostream>
#include "Lib.h"

extern "C" __declspec(dllexport) LPWSTR getSize() //возвращает имя компьютера не зависимо от класса, экспорт из библиотеки
{
	char buffer[256];
	DWORD size;
	size = sizeof(buffer);
	GetComputerName((LPWSTR)buffer, &size); //функция возвращает имя компьютера
	return (LPWSTR)buffer; //преобразование типа
}




Log* GetPointer()
{
	return new Log; //создает объект и возвращает на него указатель
}

Log::Log()
{
}
Log::~Log()
{
}

LPWSTR Log::write() //аналогичная фукнция возврата имени компьютера, которая принадлежит классу
{
	char buffer[256];
	DWORD size;
	size = sizeof(buffer);
	GetComputerName((LPWSTR)buffer, &size);
	return (LPWSTR)buffer;
}
