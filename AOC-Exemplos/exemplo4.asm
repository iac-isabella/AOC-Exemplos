; Exemplo 4:

org 100h

meuloop:
mov bx, num
mov vetor[bx], bx
mov ah, 0Eh
mov dx, vetor[bx]
mov al,  dl
int 10h
inc num
cmp num, 3
jne meuloop

ret

num dw 0
vetor dw 3 dup(?)