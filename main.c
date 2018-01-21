# include "inc/mdlint2.h"
# include <stdio.h>

// ignore
typedef mdl_u8_t mdl_u128_t[16];
/*
extern void add(void*, void*, void*, mdl_u8_t);
extern void sub(void*, void*, void*, mdl_u8_t);
# include <stdio.h>
void st(mdl_u8_t x) {
	printf("Hello - %u\n", x);
}
*/

void print(mdl_u64_t __v) {
//	printf("%lu\n", __v);
}

# include <string.h>
extern void _128_set(void*, void*, mdl_u8_t);
extern void _128_add(void*, void*, void*);
extern mdl_u8_t _128_gt(void*, void*);
int main() {
    mdl_i64_t a = -1;
    mdl_s64_t b = -1;
    mdl_i32_t c = -1;
    mdl_s32_t d = -1;
    mdl_i16_t e = -1;
    mdl_s16_t f = -1;
    mdl_i8_t g = -1;
    mdl_s8_t h = -1;
    printf("%lu\n", sizeof(mdl_u64_t));
    printf("%lu\n", sizeof(mdl_i64_t));
    printf("%lu\n", sizeof(mdl_s64_t));

    printf("%lu\n", sizeof(mdl_u32_t));
    printf("%lu\n", sizeof(mdl_i32_t));
    printf("%lu\n", sizeof(mdl_s32_t));

    printf("%lu\n", sizeof(mdl_u16_t));
    printf("%lu\n", sizeof(mdl_i16_t));
    printf("%lu\n", sizeof(mdl_s16_t));

    printf("%lu\n", sizeof(mdl_u8_t));
    printf("%lu\n", sizeof(mdl_i8_t));
    printf("%lu\n", sizeof(mdl_s8_t));
/*
    return 0;
    mdl_u64_t test = 0xF;
	mdl_u128_t a, b, d;
	memset(a, 0, sizeof(mdl_u128_t));
	memset(b, 0, sizeof(mdl_u128_t));
	memset(d, 0, sizeof(mdl_u128_t));

	_128_set(a, &test, sizeof(mdl_u64_t));
	test = 0xFFFFFFFFFFFFFFF;
	_128_set(b, &test, sizeof(mdl_u64_t));
	_128_add(a, b, d);

	printf("%lu\n", _128_gt(a, d));
//	mdl_u16_t a = 0xFF, b = 1;
//	add(&a, &b, NULL, 2);
//	printf("%u\n", a);
*/
}
