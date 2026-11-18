

data segment
    numero1 dw 8 ; DW define word = riserva 16 bit a 2 byte
                 ; DB define Byte che riserva 1 byte 
    numero2 dw 13
    somma dw 0
ends

stack segment
    dw   128  dup(0)
ends

code segment
start:
    mov ax, data ; carica in AX il segmento associato a DATA - 0710h 
                 ; NON carico il contenuto della variabile
    mov ds, ax   ; copia il valore di AX nel registro DS
    ; la CPU utilizzera' automaticamente DS e l'offset
    ; della variabile per individuarla nella RAM
    mov ax, numero2    
    mov bx, numero1 
    add ax, bx
    mov somma, ax
    ; COPIA il valore di AX nella variabile soma
    ; ora somma contiene 21 nella RAM

    
    
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
