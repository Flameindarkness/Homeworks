@echo off
md %1
chcp 65001>nul
echo @echo off>>op.bat
echo @echo off>>algem.bat
cd %1
echo copy con %cd%\"Основы программирования"\%date%.log>>../op.bat
echo copy con %cd%\"Алгебра и геометрия"\"%date%".log>>../algem.bat
md "Алгебра и геометрия"
md "Мат анализ"
md "Основы программирования"
md "Дискретная математика"
echo Ведякова А.О Начало занятий:%date%>"Алгебра и геометрия"\readme.txt
echo Евстафьева В.В. Начало занятий:%date%>"Мат анализ"\readme.txt
echo Погожев С.В. Начало занятий:%date%>"Основы программирования"\readme.txt
echo Максимов А.Ю Начало занятий:%date%>"Дискретная математика"\readme.txt
cd..
tree /F %1