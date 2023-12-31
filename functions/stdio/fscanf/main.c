// #include <stdio.h>
// int fscanf(FILE *stream, const char *format, ...);
// Функция fscanf() работает подобно функции scanf(), но читает информацию не из стандартного потока ввода stdin, а из потока, заданного указателем stream. Подробности рассматриваются в разделе этой главы, посвященном функции scanf.

// В версии C99 к параметрам stream и format применен квалификатор restrict.

// Функция fscanf() возвращает количество аргументов, которым действительно присвоены значения. Это число не включает опущенные поля. Если возвращаемое функцией значение равно EOF, то это свидетельствует о том, что до выполнения первого присваивания произошел сбой.

// Приведенный фрагмент программы читает из потока fp строку и значение переменной f с плавающей точкой (типа float).

char	str[80];
float	f;

fscanf(fp, "%s%f", str, &f);
