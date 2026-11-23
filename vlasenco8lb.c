Для ВИНДЫ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* f = fopen("output0.txt", "wt");
    if (!f) {
        printf("ERROR!\n");
        return 0;
    }
    
    fprintf(f, "Айметова Алина\n ИСЭбд-11");
    fclose(f);


    printf("SUCCESS!\n");
    return 0;
}


#include <stdio.h>

int main() {
    FILE* f = fopen("output0.txt", "w");

    if (f == NULL) {
        printf("ERROR!\n");
        return 1;
    }

    fprintf(f, "Айметова Алина\nИСЭбд-11");

    fclose(f);

    printf("SUCCESS!\n");
    return 0;
}


//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // Чтение из входного файла
    FILE *fin;
    int a, b, s;

    fin = fopen("/Users/alinaajmetova/Downloads/vlasenco/int1.txt", "r");

    if (fin == NULL) {
        printf("File int1.txt is not found\n");
        return 1;
    }

    if (fscanf(fin, "%d%d", &a, &b) != 2) {
        printf("Error reading numbers from file\n");
        fclose(fin);
        return 1;
    }

    fclose(fin);

    // Обработка
    s = a + b;

    // Запись в выходной файл
    FILE *fout = fopen("/Users/alinaajmetova/Downloads/vlasenco/out1.txt", "w");

    if (fout == NULL) {
        printf("File out1.txt cannot be created\n");
        return 1;
    }

    fprintf(fout, "%d", s);
    fclose(fout);

    printf("SUCCESS!\n");

    return 0;
}

//8.1.2
#include <stdio.h>

int main(void) {
    FILE *fin = fopen("in2.txt", "r");
    if (fin == NULL) {
        printf("Не найден in2.txt\n");
        return 1;
    }

    int a, b, c;
    if (fscanf(fin, "%d%d%d", &a, &b, &c) != 3) {
        printf("В файле должны быть три целых числа\n");
        fclose(fin);
        return 1;
    }
    fclose(fin);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    FILE *fout = fopen("out2.txt", "w");
    if (fout == NULL) {
        printf("Не удалось создать out2.txt\n");
        return 1;
    }
    fprintf(fout, "%d\n", max);
    fclose(fout);

    printf("Максимум: %d\n", max);
    return 0;
}

//8.1.3 смотри в vlasenco6.c, функция saveArray() и loadArray()

//8.1.4
#include <stdio.h>

#define MAX_SIZE 20

int main(void) {
    int a[MAX_SIZE];
    int n;

    FILE *fin = fopen("in0.txt", "r");
    if (fin == NULL) {
        printf("Не найден in0.txt\n");
        return 1;
    }

    if (fscanf(fin, "%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Неверное количество элементов\n");
        fclose(fin);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (fscanf(fin, "%d", &a[i]) != 1) {
            printf("Ошибка чтения массива\n");
            fclose(fin);
            return 1;
        }
    }
    fclose(fin);

    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[minIndex]) minIndex = i;
        if (a[i] > a[maxIndex]) maxIndex = i;
    }

    int left = minIndex < maxIndex ? minIndex : maxIndex;
    int right = minIndex > maxIndex ? minIndex : maxIndex;

    for (int i = left + 1; i < right; i++) {
        if (a[i] % 2 != 0) {
            a[i] += 10;
        }
    }

    printf("Массив после обработки: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    FILE *fout = fopen("out0.txt", "w");
    if (fout == NULL) {
        printf("Не удалось создать out0.txt\n");
        return 1;
    }

    fprintf(fout, "%d\n", n);
    for (int i = 0; i < n; i++) fprintf(fout, "%d ", a[i]);
    fprintf(fout, "\n");
    fclose(fout);

    return 0;
}

//8.2.1
#include <stdio.h>

#define MAX_LEN 256

int main(void) {
    char s[MAX_LEN];

    FILE *fin = fopen("text1.txt", "r");
    if (fin == NULL) {
        printf("Не найден text1.txt\n");
        return 1;
    }

    FILE *fout = fopen("out1.txt", "w");
    if (fout == NULL) {
        printf("Не удалось создать out1.txt\n");
        fclose(fin);
        return 1;
    }

    while (fgets(s, MAX_LEN, fin) != NULL) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == '\t') s[i] = '%';
        }
        fprintf(fout, "%s", s);
    }

    fclose(fin);
    fclose(fout);
    printf("Готово!\n");
    return 0;
}

//8.2.2
#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 256

int main(void) {
    char s[MAX_LEN];
    FILE *fin = fopen("text2.txt", "r");
    if (fin == NULL) return 1;

    FILE *fout = fopen("out2.txt", "w");
    if (fout == NULL) {
        fclose(fin);
        return 1;
    }

    while (fgets(s, MAX_LEN, fin) != NULL) {
        for (int i = 0; s[i] != '\0'; i++) {
            unsigned char ch = (unsigned char)s[i];
            if (ch >= 'a' && ch <= 'z') s[i] = (char)toupper(ch);
        }
        fputs(s, fout);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}

//8.2.3
#include <stdio.h>

#define MAX_LEN 256

int main(void) {
    char s[MAX_LEN];
    FILE *fin = fopen("text3.txt", "r");
    if (fin == NULL) return 1;

    FILE *fout = fopen("out3.txt", "w");
    if (fout == NULL) {
        fclose(fin);
        return 1;
    }

    while (fgets(s, MAX_LEN, fin) != NULL) {
        int hasLatin = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= 'a' && s[i] <= 'z')) {
                hasLatin = 1;
                break;
            }
        }

        if (hasLatin) fputc('#', fout);
        fputs(s, fout);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}



//8.2.4
#include <stdio.h>

int main(void) {
    int ch;
    FILE *fin = fopen("text4.txt", "r");
    if (fin == NULL) return 1;

    FILE *fout = fopen("out4.txt", "w");
    if (fout == NULL) {
        fclose(fin);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z')) {
            ch = '&';
        }
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}

//8.2.5
#include <stdio.h>

#define MAX_LEN 256

int main(void) {
    char s[MAX_LEN];
    FILE *fin = fopen("text5.txt", "r");
    if (fin == NULL) return 1;

    FILE *fout = fopen("out5.txt", "w");
    if (fout == NULL) {
        fclose(fin);
        return 1;
    }

    while (fgets(s, MAX_LEN, fin) != NULL) {
        int k = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == ';') k++;
        }
        fprintf(fout, "%d:", k);
        fputs(s, fout);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}

//HTML
#include <stdio.h>

int main(void) {
    int ch;
    FILE *fin = fopen("text.txt", "r");
    if (fin == NULL) {
        printf("Не найден text.txt\n");
        return 1;
    }

    FILE *fout = fopen("text.html", "w");
    if (fout == NULL) {
        fclose(fin);
        return 1;
    }

    fputs("<!DOCTYPE html>\n<html><head>\n", fout);
    fputs("<meta charset=\"UTF-8\">\n<title>Мой текст</title>\n", fout);
    fputs("</head><body>\n", fout);

    while ((ch = getc(fin)) != EOF) {
        if (ch == '&') fputs("&amp;", fout);
        else if (ch == '<') fputs("&lt;", fout);
        else if (ch == '>') fputs("&gt;", fout);
        else if (ch == '\n') fputs("<br>\n", fout);
        else fputc(ch, fout);
    }

    fputs("\n</body></html>", fout);
    fclose(fin);
    fclose(fout);
    printf("Создан text.html\n");
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD 256

int isLowerWord(const char *w) {
    if (w[0] == '\0') return 0;
    for (int i = 0; w[i] != '\0'; i++)
        if (!(w[i] >= 'a' && w[i] <= 'z')) return 0;
    return 1;
}

int isVariant2Bold(const char *w) {
    int len = (int)strlen(w);
    if (len < 2 || w[0] < 'a' || w[0] > 'z') return 0;
    for (int i = 1; i < len; i++)
        if (w[i] < 'A' || w[i] > 'Z') return 0;
    return 1;
}

int main(void) {
    int ch, i = 0;
    char word[MAX_WORD];

    FILE *fin = fopen("text2.txt", "r");
    if (fin == NULL) return 1;
    FILE *fout = fopen("text2.html", "w");
    if (fout == NULL) {
        fclose(fin);
        return 1;
    }

    fputs("<!DOCTYPE html><html><head><meta charset=\"UTF-8\">", fout);
    fputs("<title>Текст</title></head><body>\n", fout);

    while ((ch = getc(fin)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (i < MAX_WORD - 1) word[i++] = (char)ch;
        } else {
            if (i > 0) {
                word[i] = '\0';
                if (isVariant2Bold(word)) fprintf(fout, "<b>%s</b>", word);
                else if (isLowerWord(word)) fprintf(fout, "<i>%s</i>", word);
                else fputs(word, fout);
                i = 0;
            }

            if (ch == '&') fputs("&amp;", fout);
            else if (ch == '<') fputs("&lt;", fout);
            else if (ch == '>') fputs("&gt;", fout);
            else if (ch == '\n') fputs("<br>\n", fout);
            else fputc(ch, fout);
        }
    }

    if (i > 0) {
        word[i] = '\0';
        if (isVariant2Bold(word)) fprintf(fout, "<b>%s</b>", word);
        else if (isLowerWord(word)) fprintf(fout, "<i>%s</i>", word);
        else fputs(word, fout);
    }

    fputs("</body></html>", fout);
    fclose(fin);
    fclose(fout);
    return 0;
}
