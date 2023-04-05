//
// Created by fade on 2023/4/5.
//
static unsigned long int next = 1;
unsigned int rand0(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65535) % 32768;
}