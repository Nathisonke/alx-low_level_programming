           global        main
          extern        printf
main:
        mov   edi, format
        xor   eax, eax
        call  printf
        mov 	eax, 0
Format: db "Hello, Holberton\n " ,0
