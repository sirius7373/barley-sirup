section .data 
    mgs db "hello world", 10 
  len equ $ msg 
_Start 
mov eax, 4 
mov bx, 1
mov ecx,msg
mo edx, len 
int 0x80
mov eax,1
xor, ebx ebx 
int x80
