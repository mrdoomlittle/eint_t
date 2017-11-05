section .text
; ignore
global _128_set
global _128_add
global _128_gt
global _128_lt
extern print
_128_set:
	push rbp
	mov rbp, rsp
	sub rsp, 8
	mov [rbp-8], dl

	_l1:
	mov dl, [rsi]
	mov BYTE[rdi], dl
	inc rdi
	inc rsi
	dec BYTE[rbp-8]
	cmp BYTE[rbp-8], 0
	jne _l1

	mov rsp, rbp
	pop rbp
	ret
_128_add:
	push rbp
	mov rbp, rsp
	sub rsp, 8
	mov [rbp-8], rdx ; dst
	; rdi, rsi, rdx

	mov rax, [rdi]
	xor rax, 0xFFFFFFFFFFFFFFFF
	cmp rax, [rsi]
	ja _sk

	mov rcx, [rdi]
	mov rdx, [rsi]
	add rcx, rdx

	mov rdx, [rbp-8]
	mov [rdx], rcx

	jmp _end
	_sk:

	mov rdx, [rbp-8]
	inc QWORD[rdx+8]
	mov rax, [rsi]
	sub rax, 0xFFFFFFFFFFFFFFFF
	add [rdx], rax

	_end:
	mov rsp, rbp
	pop rbp
	ret
_128_gt:
	mov rax, [rsi+8]
	cmp [rdi+8], rax
	jg _n
	mov rax, [rsi]
	cmp [rdi], rax
	ja _yes
	jbe _no
	ret
	_n:
	cmp rax, [rsi+8]
	ja _yes
	jbe _no
	ret
	_yes:
	mov al, 1
	ret
	_no:
	mov al, 0
	ret
_128_lt:

	ret
