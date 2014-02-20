; Exemplo 1:

org 100h

mov num, 1
cmp num, 1
jne diferente
igual:
mov ah, 0Eh
mov al, 't'
int 10h
jmp fim

diferente:
mov ah, 0Eh
mov al, 'f'
int 10h

fim:
ret


num db ? 
