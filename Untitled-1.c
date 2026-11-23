//7.1.1
// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// //#include <Windows.h>
// void main() {
// //    SetConsoleCP (1251);
// //    SetConsoleOutputCP (1251);

//     printf("Введите символ = ");
//     int ch = getchar();
//     for (int c = ch; c <= ch + 19; c++) {
//         printf(" %c' (%d) \n", c, c);
//     }
//     printf("\n\n\n");
//     {
//         int x;
//         scanf ("%d", &x);
//     }
// }

//7.1.3
// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include ‹Windows.h›
// void main() {
// SetConsoleCP(1251) ;
// SetConsoleOutputCP(1251) ;
// // ввод строки
//     char s[80];
//     printf("Введите строку:");
//     fgets(s, 79, stdin);

//     printf("\nВы ввели строку s = \"%s \"", s);
//     int cnt = 0;
//     for (int i = 0; i < strlen(s); i++) { 
//         if (s[i] == ' ') cnt++;
//     }
//     printf("\nB ней %d пробелов\n", cnt);
//     {
//     int x;
//     scanf ("%d", &x);
//     }
// }    

// //7.1.4

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <string.h>
// #include <Windows.h>

// void main() {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);

//     // ввод строки
//     char s[80];
//     printf("Введите строку: ");
//     fgets(s, 79, stdin);

//     // замена пробелов на #
//     for (int i = 0; i < strlen(s); i++) {
//         if (s[i] == ' ') {
//             s[i] = '#';
//         }
//     }

//     // вывод обработанной строки
//     printf("\nПолучившаяся строка: %s", s);

//     int x;
//     scanf("%d", &x);
// }

//7.1.6
// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <string.h>
// //#include <Windows.h>

// void main() {
// //    SetConsoleCP(1251);
// //    SetConsoleOutputCP(1251);

//     // ввод строки
//     char s[80];
//     printf("Введите строку: ");
//     fgets(s, 79, stdin);

//     // замена пробелов на #
//     for (int i = 0; s[i] != '\0'; i++) {
//         s[i] = toupper(s[i]);
//     }

//     // вывод обработанной строки
//     printf("\nПолучившаяся строка: %s", s);

//     int x;
//     scanf("%d", &x);
// }

//7.1.7  -  2 потом


//7.2.1.1

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <Windows.h>

// // Собственная функция strlen
// int my_strlen(char s[]) {
//     int i = 0;

//     while (s[i] != '\0') {
//         i++;
//     }

//     return i;
// }

// void main() {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);

//     // Ввод первой строки
//     char s1[80];

//     printf("Введите первую строку: ");
//     fgets(s1, 79, stdin);

//     // Вызов собственной функции
//     printf("Длина первой строки: %d\n", my_strlen(s1));

//     // Ввод второй строки
//     char s2[80];

//     printf("\nВведите вторую строку: ");
//     fgets(s2, 79, stdin);

//     // Вызов собственной функции
//     printf("Длина второй строки: %d\n", my_strlen(s2));

//     int x;
//     scanf("%d", &x);
// }

// //7.2.1.2

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <Windows.h>

// // Собственная функция strlen с указателями
// int my_strlen(char *s) {
//     int cnt = 0;

//     while (*s != '\0') {
//         cnt++;
//         s++;
//     }

//     return cnt;
// }

// void main() {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);

//     // Ввод первой строки
//     char s1[80];

//     printf("Введите первую строку: ");
//     fgets(s1, 79, stdin);

//     // Вызов собственной функции
//     printf("Длина первой строки: %d\n", my_strlen(s1));

//     // Ввод второй строки
//     char s2[80];

//     printf("\nВведите вторую строку: ");
//     fgets(s2, 79, stdin);

//     // Вызов собственной функции
//     printf("Длина второй строки: %d\n", my_strlen(s2));

//     int x;
//     scanf("%d", &x);
// }

// //7.2.2.1

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <Windows.h>

// // Собственная функция strcmp
// int my_strcmp(char s1[], char s2[]) {
//     int i = 0;

//     while (s1[i] == s2[i] && s1[i] != '\0') {
//         i++;
//     }

//     return (unsigned char)s1[i] -
//            (unsigned char)s2[i];
// }

// void main() {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);

//     // Ввод первой строки
//     char s1[80];

//     printf("Введите первую строку: ");
//     fgets(s1, 79, stdin);

//     // Удаление символа перехода на новую строку
//     for (int i = 0; s1[i] != '\0'; i++) {
//         if (s1[i] == '\n') {
//             s1[i] = '\0';
//             break;
//         }
//     }

//     // Ввод второй строки
//     char s2[80];

//     printf("Введите вторую строку: ");
//     fgets(s2, 79, stdin);

//     // Удаление символа перехода на новую строку
//     for (int i = 0; s2[i] != '\0'; i++) {
//         if (s2[i] == '\n') {
//             s2[i] = '\0';
//             break;
//         }
//     }

//     // Сравнение строк
//     int result = my_strcmp(s1, s2);

//     if (result == 0) {
//         printf("Строки одинаковые\n");
//     }
//     else if (result < 0) {
//         printf("Первая строка меньше второй\n");
//     }
//     else {
//         printf("Первая строка больше второй\n");
//     }

//     printf("Результат strcmp: %d\n", result);

//     int x;
//     scanf("%d", &x);
// }


// //7.2.2.2

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <Windows.h>

// // Собственная функция strcmp с указателями
// int my_strcmp(char *s1, char *s2) {
//     while (*s1 == *s2 && *s1 != '\0') {
//         s1++;
//         s2++;
//     }

//     return (unsigned char)*s1 -
//            (unsigned char)*s2;
// }

// void main() {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);

//     // Ввод первой строки
//     char s1[80];

//     printf("Введите первую строку: ");
//     fgets(s1, 79, stdin);

//     // Удаление символа перехода на новую строку
//     for (int i = 0; s1[i] != '\0'; i++) {
//         if (s1[i] == '\n') {
//             s1[i] = '\0';
//             break;
//         }
//     }

//     // Ввод второй строки
//     char s2[80];

//     printf("Введите вторую строку: ");
//     fgets(s2, 79, stdin);

//     // Удаление символа перехода на новую строку
//     for (int i = 0; s2[i] != '\0'; i++) {
//         if (s2[i] == '\n') {
//             s2[i] = '\0';
//             break;
//         }
//     }

//     // Сравнение строк
//     int result = my_strcmp(s1, s2);

//     if (result == 0) {
//         printf("Строки одинаковые\n");
//     }
//     else if (result < 0) {
//         printf("Первая строка меньше второй\n");
//     }
//     else {
//         printf("Первая строка больше второй\n");
//     }

//     printf("Результат strcmp: %d\n", result);

//     int x;
//     scanf("%d", &x);
// }


// //7.2.3

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <string.h>
// #include <Windows.h>

// void my_strcpy(char s1[], char s2[]) {
//     int i = 0;

//     while (s2[i] != '\0') {
//         s1[i] = s2[i];
//         i++;
//     }

//     s1[i] = '\0';
// }

// void main() {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);

//     char s1[80];
//     char s2[80];

//     printf("Введите первую строку: ");
//     fgets(s1, 79, stdin);

//     printf("Введите вторую строку: ");
//     fgets(s2, 79, stdin);

//     s1[strcspn(s1, "\n")] = '\0';
//     s2[strcspn(s2, "\n")] = '\0';

//     printf("\nПервая строка до копирования: %s", s1);
//     printf("\nВторая строка: %s", s2);

//     my_strcpy(s1, s2);

//     printf("\n\nПервая строка после копирования: %s", s1);

//     int x;
//     scanf("%d", &x);
// }



// //7.2.4

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <string.h>
// #include <Windows.h>

// void my_strcpy(char s1[], char s2[]) {
//     int i = 0;

//     while (s2[i] != '\0') {
//         s1[i] = s2[i];
//         i++;
//     }

//     s1[i] = '\0';
// }

// void main() {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);

//     char s1[80];
//     char s2[80];

//     printf("Введите первую строку: ");
//     fgets(s1, 79, stdin);

//     printf("Введите вторую строку: ");
//     fgets(s2, 79, stdin);

//     s1[strcspn(s1, "\n")] = '\0';
//     s2[strcspn(s2, "\n")] = '\0';

//     printf("\nПервая строка до копирования: %s", s1);
//     printf("\nВторая строка: %s", s2);

//     my_strcpy(s1, s2);

//     printf("\n\nПервая строка после копирования: %s", s1);

//     int x;
//     scanf("%d", &x);
// }


// //7.2.5.1

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <string.h>
// #include <Windows.h>

// int my_strlen(char s[]) {
//     int i = 0;

//     while (s[i] != '\0') {
//         i++;
//     }

//     return i;
// }

// void main() {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);

//     char s[80];

//     printf("Введите строку: ");
//     fgets(s, 79, stdin);

//     s[strcspn(s, "\n")] = '\0';

//     printf("\nВведенная строка: %s", s);
//     printf("\nДлина строки: %d", my_strlen(s));

//     int x;
//     scanf("%d", &x);
// }

// //7.2.5.2

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <string.h>
// #include <Windows.h>

// int my_strlen(char *s) {
//     int cnt = 0;

//     while (*s != '\0') {
//         cnt++;
//         s++;
//     }

//     return cnt;
// }

// void main() {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);

//     char s[80];

//     printf("Введите строку: ");
//     fgets(s, 79, stdin);

//     s[strcspn(s, "\n")] = '\0';

//     printf("\nВведенная строка: %s", s);
//     printf("\nДлина строки: %d", my_strlen(s));

//     int x;
//     scanf("%d", &x);
// }


// //7.2.6.1

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// #include <Windows.h>

// char* CreateNewString(char* s1);

// void main() {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);

//     char s1[100];

//     printf("s1=");
//     fgets(s1, sizeof(s1), stdin);

//     s1[strcspn(s1, "\n")] = '\0';

//     char* s2 = CreateNewString(s1);

//     if (s2 == NULL) {
//         printf("Ошибка выделения памяти!");
//         return;
//     }

//     printf("s1=%s\n", s1);
//     printf("s2=%s\n", s2);

//     free(s2);

//     int x;
//     scanf("%d", &x);
// }

// char* CreateNewString(char* s1) {
//     int i, len;
//     int hasDigit = 0;

//     len = 0;

//     for (i = 0; s1[i] != '\0'; i++) {
//         len++;

//         if (isdigit((unsigned char)s1[i])) {
//             hasDigit = 1;
//         }
//     }

//     if (hasDigit) {
//         char* s2 = (char*)malloc(len + 4);

//         if (s2 == NULL) {
//             return NULL;
//         }

//         s2[0] = '+';
//         s2[1] = '+';
//         s2[2] = '+';

//         for (i = 0; s1[i] != '\0'; i++) {
//             s2[i + 3] = s1[i];
//         }

//         s2[len + 3] = '\0';

//         return s2;
//     }
//     else {
//         char* s2 = (char*)malloc(len + 3);

//         if (s2 == NULL) {
//             return NULL;
//         }

//         for (i = 0; s1[i] != '\0'; i++) {
//             s2[i] = s1[i];
//         }

//         s2[len] = '*';
//         s2[len + 1] = '*';
//         s2[len + 2] = '\0';

//         return s2;
//     }
// }


// //7.2.6

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// #include <Windows.h>

// char* CreateNewString(char* s1);

// void main() {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251);

//     char s1[100];

//     printf("s1=");
//     fgets(s1, sizeof(s1), stdin);

//     s1[strcspn(s1, "\n")] = '\0';

//     char* s2 = CreateNewString(s1);

//     if (s2 == NULL) {
//         printf("Ошибка выделения памяти!");
//         return;
//     }

//     printf("s1=%s\n", s1);
//     printf("s2=%s\n", s2);

//     free(s2);

//     int x;
//     scanf("%d", &x);
// }

// char* CreateNewString(char* s1) {
//     int i, len;
//     int hasDigit = 0;

//     len = 0;

//     for (i = 0; s1[i] != '\0'; i++) {
//         len++;

//         if (isdigit((unsigned char)s1[i])) {
//             hasDigit = 1;
//         }
//     }

//     if (hasDigit) {
//         char* s2 = (char*)malloc(len + 4);

//         if (s2 == NULL) {
//             return NULL;
//         }

//         s2[0] = '+';
//         s2[1] = '+';
//         s2[2] = '+';

//         for (i = 0; s1[i] != '\0'; i++) {
//             s2[i + 3] = s1[i];
//         }

//         s2[len + 3] = '\0';

//         return s2;
//     }
//     else {
//         char* s2 = (char*)malloc(len + 3);

//         if (s2 == NULL) {
//             return NULL;
//         }

//         for (i = 0; s1[i] != '\0'; i++) {
//             s2[i] = s1[i];
//         }

//         s2[len] = '*';
//         s2[len + 1] = '*';
//         s2[len + 2] = '\0';

//         return s2;
//     }
// }


