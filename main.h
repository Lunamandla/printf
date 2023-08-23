#ifndef FMT_FN
#define FMT_FN
struct fmt_fn
{
	char c;
	int (*fn_ptr)(va_list);
};
#endif

#ifndef PUTCHAR
#define PUTCHAR
int _putchar(char c);
#endif

#ifndef PRINTF
#define PRINTF
int _printf(const char *, ...);
#endif

#ifndef GET_FMT_FN
#define GET_FMT_FN
int (*get_fmt_fn(char))(va_list);
#endif

#ifndef PRINT_CHAR
#define PRINT_CHAR
int print_char(va_list);
#endif

#ifndef PRINT_STRING
#define PRINT_STRING
int print_string(va_list);
#endif

#ifndef PRINT_PERCENTAGE
#define PRINT_PERCENTAGE
int print_percentage(va_list);
#endif

#ifndef PRINT_NOTHING
#define PRINT_NOTHING
int print_nothing(va_list);
#endif

#ifndef PRINT_NO_FMT
#define PRINT_NO_FMT
int print_no_fmt(va_list);
#endif

#ifndef PRINT_INT_D
#define PRINT_INT_D
int print_int_d(va_list);
#endif

int get_int_len(int);

int is_negative(int *, int *);
