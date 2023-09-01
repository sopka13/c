// #include <stdio.h>
// int fputs(const char *str, FILE *stream);
// Функция fputs() записывает в заданный поток stream содержимое строки, адресуемой указателем str. При этом завершающий нулевой символ (т.е. символ конца строки ('0')) не записывается.

// В версии C99 к параметрам str и stream применен квалификатор restrict.

// При успешном выполнении функция fputs() возвращает неотрицательное значение, а при неудачном — значение EOF.

// Првиеденный фрагмент программы записывает строку в открытый поток файла

fputs("This is text", fp);