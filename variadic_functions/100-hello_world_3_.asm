#include <unistd.h>

int main(void)
{
	const char *message = "Hello, World\n";
	asm (
		"mov $1, %%rax;"     // syscall number for sys_write
		"mov $1, %%rdi;"     // file descriptor 1 is stdout
		"mov %0, %%rsi;"     // pointer to the message
		"mov $13, %%rdx;"    // length of the message
		"syscall"            // invoke operating system to do the write
		:
		: "r"(message)
		: "%rax", "%rdi", "%rsi", "%rdx"
	);

	asm (
		"mov $60, %%rax;"    // syscall number for sys_exit
		"xor %%rdi, %%rdi;"  // exit code 0
		"syscall"            // invoke operating system to exit
		:
		:
		: "%rax", "%rdi"
	);

	return (0);
}
