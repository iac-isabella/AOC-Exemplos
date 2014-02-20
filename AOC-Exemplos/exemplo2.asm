; Exemplo 2:

org 100h

mov num, 0 

meuloop:
add num, 2
cmp num, 10
jne meuloop

mov ah, 0Eh
mov al, num
; Subtraimos 8 de al para obter o caractere ascii
; numero 2 (uma carinha), pois nao temos como imprimir
; o valor de num diretamente por enquanto.
sub al, 8
int 10h


ret

num db 1
