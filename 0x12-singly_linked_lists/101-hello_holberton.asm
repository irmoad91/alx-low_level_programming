section .data
    message db 'Hello, Holberton',0Ah ; message to be printed, including newline character
    len equ $-message ; length of the message

section .text
    global main
    
main:
    ; write the message to stdout
    mov eax, 4          ; write syscall number
    mov ebx, 1          ; file descriptor for stdout
    mov ecx, message    ; pointer to message
    mov edx, len        ; length of message
    int 80h             ; call kernel
    
    ; exit program
    mov eax, 1          ; exit syscall number
    xor ebx, ebx        ; return 0 status
    int 80h             ; call kernel
