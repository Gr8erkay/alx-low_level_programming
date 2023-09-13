
void _putchar(char c);

int main() {
    char str[] = "_putchar\n";
    for(int i = 0; i < 9; i++)
        _putchar(str[i]);
    return 0;
}

void _putchar(char c) {
    asm volatile ("mov $0x01, %%rax; mov $0x01, %%rdi; mov %0, %%rsi; mov $0x01, %%rdx; syscall" : : "g"(&c) : "rax", "rdi", "rsi", "rdx");
}

