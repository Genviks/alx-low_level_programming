section .data
format db 'Hello, Holberton', 0

section .text
global main
extern printf

main:
; save base pointer and set up stack frame
push rbp
mov rbp, rsp

; Pass format string address as argument to printf
mov edi, format
xor eax, eax ; Clear eax register (optional)
call printf

; Clean up stack frame and restore base pointer
mov rsp, rbp
pop rbp

; Exit program
xor eax, eax
ret
