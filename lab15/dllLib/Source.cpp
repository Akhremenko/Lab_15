#include <Windows.h>
#include <iostream>
#include "Lib.h"

extern "C" __declspec(dllexport) LPWSTR getSize() //���������� ��� ���������� �� �������� �� ������, ������� �� ����������
{
	char buffer[256];
	DWORD size;
	size = sizeof(buffer);
	GetComputerName((LPWSTR)buffer, &size); //������� ���������� ��� ����������
	return (LPWSTR)buffer; //�������������� ����
}




Log* GetPointer()
{
	return new Log; //������� ������ � ���������� �� ���� ���������
}

Log::Log()
{
}
Log::~Log()
{
}

LPWSTR Log::write() //����������� ������� �������� ����� ����������, ������� ����������� ������
{
	char buffer[256];
	DWORD size;
	size = sizeof(buffer);
	GetComputerName((LPWSTR)buffer, &size);
	return (LPWSTR)buffer;
}
