; Exemplo 3

org 100h

mov cx, 5
meufor:
mov ah, 0Eh
mov al, num
int 10h
inc num
loop meufor

ret

num db 1
