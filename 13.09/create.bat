@echo off
md %1
chcp 1251>nul
echo @echo off>>op.bat
echo @echo off>>algem.bat
cd %1
echo copy con %cd%\"������ ����������������"\%date%.log>>../op.bat
echo copy con %cd%\"������� � ���������"\"%date%".log>>../algem.bat
md "������� � ���������"
md "��� ������"
md "������ ����������������"
md "���������� ����������"
echo �������� �.� ������ �������:%date%>"������� � ���������"\readme.txt
echo ���������� �.�. ������ �������:%date%>"��� ������"\readme.txt
echo ������� �.�. ������ �������:%date%>"������ ����������������"\readme.txt
echo �������� �.� ������ �������:%date%>"���������� ����������"\readme.txt
cd..
tree /F %1