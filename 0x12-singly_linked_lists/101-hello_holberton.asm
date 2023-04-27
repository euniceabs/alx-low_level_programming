global main	; Declare that main is a global symbol that can be called by other modules

extern printf	; Declare the external function printf that is defined in a different module
	; Define the data section, which contains initialized variables
	msg:    db "Hello, Holberton", 0 ; Define a null-terminated string called "msg"
	fmt:    db "%s", 10, 0          ; Define a null-terminated string called "fmt" that contains a printf format string and a newline character

	; Define the text section, which contains executable instructions
	main:	; Define the entry point for the program
	push	rbp	; Set up a stack frame by pushing the base pointer onto the stack
	mov     rdi, fmt	; Move the address of the format string into the first argument register (rdi)
	mov     rsi, msg	; Move the address of the message string into the second argument register (rsi)
	mov     rax, 0	; Zero out the return value register (rax)
	call    printf	; Call the printf function with the specified arguments
	pop     rbp	; Restore the stack by popping the base pointer off the stack
	mov     rax, 0	; Set the return value to 0 to indicate normal, no error return
	ret	; Return to the caller

