# include "inc/mdlint.h"
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
	printf("%lu\n", __v);
}

# include <string.h>
extern void _128_set(void*, void*, mdl_u8_t);
extern void _128_add(void*, void*, void*);
extern mdl_u8_t _128_gt(void*, void*);
int main() {
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
}
