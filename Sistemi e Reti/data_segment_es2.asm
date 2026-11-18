name "data_segment_es2"

data segment
     valore db 20
ends

stack segment
    dw   128  dup(0)
ends

code segment
start:
    mov ax, data
    mov ds, ax
    mov al, valore
    add al, 10
    sub al, 5
    mov valore, al
    
    
    
    
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
