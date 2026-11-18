name "data_segment_es1"

data segment
     numero1 db 12
     numero2 db 5
     risultato db 0
ends

stack segment
    dw   128  dup(0)
ends

code segment
start:
    mov ax, data
    mov ds, ax
    mov al, numero1
    mov bl, numero2
    sub al, bl
    mov risultato, al

    
    
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
